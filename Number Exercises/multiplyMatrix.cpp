#include <iostream>

int main() {

    int r1, r2, c1, c2;

    // Getting matrix sizes
    std::cout << "Enter rows and columns for the first matrix: ";
    std::cin >> r1 >> c1;

    std::cout << "Enter rows and columns for the second matrix: ";
    std::cin >> r2 >> c2;

    // Check for invalid dimensions
    if (c1 != r2) {
        std::cout << "Multiplication is not possible. Dimensions must match.";
        return 1;
    }

    // Declare matrices
    int A[r1][c1];
    int B[r2][c2];
    int C[r1][c2];

    // Getting the elements
    std::cout << "Enter elements of matrix 1: ";
    for (int i = 0; i < r1; i++) {

        for (int j = 0; j < c1; j++) {
            
            std::cin >> A[i][j];
        }
    }

    std::cout << "Enter elements of matrix 2: ";
    for (int i = 0; i < r2; i++) {

        for (int j = 0; j < c2; j++) {
            
            std::cin >> B[i][j];
        }
    }

    // Multiply the matrixs
    for (int i = 0; i < r1; i++) {

        for (int j = 0; j < c2; j++) {

            C[i][j] = A[i][j] * B[i][j];
        }
    }

    // Print the output
    std::cout << "Result: " << std::endl;
    for (auto& x:C) {

        for (auto& y:x) {

            std::cout << y << " ";
        }

        std::cout << std::endl;
    }

    return 0;
}