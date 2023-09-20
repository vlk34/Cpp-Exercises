#include <iostream>
#include <string>

int main() {

    // std::string haystack = "The quick brown fox jumps over the lazy dog";
    // std::string needle = "fox";

    // size_t foundPosition = haystack.find(needle);

    // std::string found = haystack.substr(foundPosition, needle.length());

    // std::cout << found;

    // FUNCTIONS

    // std::string s;

    // s.length(); // Finds out the length of s
    // s.size(); // same thing

    // s.capacity(); // Gives the capacity of the string (string size + the remaining spaces, buffer)
    // s.resize(30); // changes the capacity
    // s.max_size(); // what is the max size a string can have, how many characters are allowed
    // s.clear(); // clear the contents of a string
    // s.erase(); // same thing
    // s.empty(); // whether a string is empty or not

///////////////////////////////////////////////////////////////////

    // std::string str = "Hello";

    // std::cout << str.length() << std::endl;
    // std::cout << str.size() << std::endl;
    
    // std::cout << str.capacity() << std::endl;
    // str.resize(50);

    // std::cout << str.capacity() << std::endl;
    // std::cout << str.max_size() << std::endl;

    // str.clear();
    // std::cout << str << std::endl;
    // std::cout << str.length() << std::endl;

    // if(str.empty()) {
    //     std::cout << "Empty" << std::endl;
    // } else {
    //     std::cout << "String is " << str << std::endl;
    // }

    // str.append(" Bye"); 
    // std::cout << str;

    // str.insert(3, "Apple", 2); // HelAplo, 3rd parameter is optional

    // str.replace(3, 2, "aa");    // starting index, how many characters should be replaced, replace that many characters with "aa"
    // std::cout << str;

    // str.push_back('z'); // adds this to the end of string
    // str.pop_back(); // deletes last character (like backspace, deletes last one)
    
    // std::string str1 = "Ahmet", str2 = "Veli";
    // std::cout << str1 << std::endl << str2 << std::endl; 

    // std::cout << std::endl;

    // str1.swap(str2);
    // std::cout << str1 << std::endl << str2; 
    
    // str = "Volkan";

    // char string[10];
    // str.copy(string, sizeof(string)-1); // copied the string to an array.
    // string[str.length()] = '\0';

    // s = "Welcome";

    // char strArray[10];
    // s.copy(strArray, 3);
    // strArray[3] = '\0';

    // std::cout << string << std::endl;
    // std::cout << strArray;

    // std::string sentence = "How are you";

    // std::cout << sentence.find("are") << std::endl;
    // std::cout << sentence.rfind("are");

    // s.find_first_of('l');   // from the start
    // s.find_first_of('le');   // it doesnt check for "le" , it checks for e and l, whichever is first
    // s.find_last_of('l, 3');     // searches from index 3,

    // std::string str3 = "Programming";
    // std::string substr = str3.substr(3, 4);

    // std::cout << substr;

    // str3.at(4); // gives out 'r'
    // str3[4]; // same thing

    // std::cout << str3.front();  // gives first char
    // std::cout << str3.back();   // gives last char

    // std::string first = "Hello";
    // std::string second = " World";
    // std::string result = first + second;


    // std::cout << result;

    std::string str = "Today";
    std::string::iterator it;
    std::string::reverse_iterator rit;

    // with iterator
    for (it = str.begin(); it != str.end(); it++) {
        
        std::cout << *it << " ";
    }

    for (rit = str.rbegin(); rit != str.rend(); rit++) {
        
        std::cout << *rit << " ";
    }

    // or with a normal for loop
    for (int i = 0; str[i] != '\0'; i++) {

        std::cout << str[i] << " ";
    }
}