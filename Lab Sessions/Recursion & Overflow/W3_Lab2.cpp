#include <iostream>
#include <climits>
using namespace std;

int sumMat(int mat[][5], int rows) {

    int sum = 0;

    for (int i = 0; i < rows; i++) {

        for (int j = 0; j < 5; j++) {

            if (sum > INT_MAX - mat[i][j] && mat[i][j] > 0)
                throw overflow_error("Overflow");
            if (sum < INT_MIN - mat[i][j] && mat[i][j] < 0)
                throw underflow_error("Underflow");

            sum += mat[i][j];
        }
    }

    return sum;
}

int main() {
    
    try 
    {
        int mat1[1][5] = {{1, 2, 3, 4, 5}};
        cout << "Sum of matrix 1: " << sumMat(mat1, 1) << endl;


        int mat2[3][5] =    {{1, 2, 3, 4, 225235},
                            {324234, -32234, 1111, 123, -200000},
                            {123, 462, 5243, 5555, 12}};
        cout << "Sum of matrix 2: " << sumMat(mat2, 3) << endl;


        int mat3[65536][5] = {0};
        for (int i = 0; i < 65536; i++)
            for (int j = 0; j < 5; j++) {

                mat3[i][j] = 16234;
            }
        cout << "Sum of matrix 3: " << sumMat(mat3, 65536) << endl;


        int mat4[2][5] = {{-3, -1, -3, -536870911, -491837218},
        {-3, -2, -389394857, -999939492, -737117283}};
        cout << "Sum of matrix 4: " << sumMat(mat4, 2) << endl;
    }

    catch (const overflow_error &error) {
        cerr << "Exception caught: " << error.what() << '\n' << endl;
    }

    catch (const underflow_error &error) {
        cerr << "Exception caught: " << error.what() << '\n' << endl;
    }
}