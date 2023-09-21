#include <iostream>
#include <string>

int search(int A[], int n, int key) {

    for (int i = 0; i < n; i++) {

        if (A[i] == key) {
            return i;
        }
    }

    return 0;
}

int main() {

    int A[] = {2, 4, 6, 7, 10, 9, 13};
    int n = sizeof(A) / sizeof(A[0]);
    int key;

    std::cout << "Enter an Element to be searched: ";
    std::cin >> key;

    int index = search(A, n, key);

    std::cout << "Element found at index: " << index << std::endl;
}