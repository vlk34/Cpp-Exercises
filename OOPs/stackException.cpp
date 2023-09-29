#include<iostream>

class StackOverFlow:std::exception{};
class StackUnderFlow:std::exception{};

class Stack {
private:
    int size;
    int top = -1;
    int *stk;

public:
    Stack(int sz) {
        size = sz;
        stk = new int[size];
    }

    void push(int x) {
        if (top == size - 1) {  // if the stack is full
            throw StackOverFlow();
        }

        top++;  
        stk[top] = x;   // add x to current index
    }

    int pop() {
        if (top == -1) {    // if the stack is empty
            throw StackUnderFlow();
        }

        return stk[top--];  // remove the last index (decrease the stack size by 1, pop the last element)
    }
 
};
    
int main()
{
    Stack s(5);
    
    try {
        s.push(2);
        s.push(3);
        s.push(5);
        s.push(7);
        s.pop();
        s.pop();
        s.pop();
    }  
    
    // const so we dont't accidently edit it, & so that it doesn't create a copy of StackOverFlow and store it in "e". common practice (i think)
    catch (const StackOverFlow& e) {
        std::cerr << "Stack overflow exception: The stack is full." << std::endl;
    }

    catch (const StackUnderFlow& e) {
        std::cerr << "Stack underflow exception: The stack is full." << std::endl;
    }

    return 0;    
}