#include <iostream>

int main() {

    int A[2][3] = {{3, 3, 3}, {3, 3, 3}};
    int B[2][3] = {{1, 1, 1}, {1, 1, 1}};
    int C[2][3];

    for (int i = 0; i < 2; i++) {

        for (int j = 0; j < 3; j++) {

            C[i][j] = A[i][j] + B[i][j];    // multiply matrixes
        }
    }

    for (auto& x:C) {   // new weird way to iterate in an array

        for (auto& y:x) {

            std::cout << y << " ";
        }

        std::cout << std::endl;
    }
}