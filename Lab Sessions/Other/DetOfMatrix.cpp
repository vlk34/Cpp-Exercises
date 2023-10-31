#include <iostream>
using namespace std;

template <typename T>
T determinant3x3(T matrix[3][3]) {
    T det = 0;
    for (int i = 0; i < 3; i++) {   // loops on rows of the 3x3 matrix
        T submatrix[2][2];
        for (int j = 0; j < 2; j++) {   // loops on the rows of 2x2 matrix

            for (int k = 0; k < 2; k++) {   // loops on the columns of 2x2 matrix

                submatrix[j][k] = matrix[(j >= i) ? j + 1 : j][k + 1];

            }
        }

        T submatrixDet = (submatrix[0][0] * submatrix[1][1]) - (submatrix[0][1] * submatrix[1][0]);

        if (i % 2 == 0) {
            det += matrix[i][0] * submatrixDet;
        } else {
            det -= matrix[i][0] * submatrixDet;
        }
    }

    return det;
}

int main() {
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    double det = determinant3x3(matrix);

    cout << "Determinant of the 3x3 matrix is: " << det << endl;

    return 0;
}
