#include <iostream>
#include <cstdlib>
#include <ctime>
// #define N 2
// #define M 3


using namespace std;

// Multiply Function
int multiply(int a, int b) {

    int result = 0;
    for (int i = 0; i < b; i++) {

        result += a;
    }

    return result;
}

int getSumLeftDigits(const string &s) {
    int sum = 0;

    for (size_t i = 0; i < s.size(); i++) {

        if (i == 0)
            sum += s[i] - '0';
        else if (s[i] == '_')
            sum += s[i+1] - '0';
    }

    return sum;
}

int main() {

    int M = 6;
    int N = 12;
    // initialize matrixes and create random seed
    int mat1[N][M];
    int mat2[M][N];
    int mat3[N][N];
    srand(time(NULL));

    // fill matrixes with random integers between (1 - 20)
    for (int i = 0; i < N; i++) {

        for (int j = 0; j < M; j++) {

            mat1[i][j] = rand() % 20 + 1;
        }
    }

    for (int i = 0; i < M; i++) {

        for (int j = 0; j < N; j++) {

            mat2[i][j] = rand() % 20 + 1;
        }
    }

    // matrix multiplication
    for (int i = 0; i < N; i++) {   // iterates through the rows of mat1 and mat3

        for (int j = 0; j < N; j++) {   // iterates through the columns of mat3

            mat3[i][j] = 0; // set result to 0

            for (int k = 0; k < M; k++) {   // iterates through the columns of mat1 and rows of mat2

                mat3[i][j] += multiply(mat1[i][k], mat2[k][j]);
            }
        }
    }

    // print matrixes for debug
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cout << mat1[i][j] << "\t";
        } cout << endl;
    }

    cout << "------------\n";

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cout << mat2[i][j] << "\t";
        } cout << endl;
    }

    cout << "------------\n";

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << mat3[i][j] << "\t";
        } cout << endl;
    }

    string str = "";

    // Diagonal top-left to bottom-right --- works
    for (int i = 0; i < N; i++) {
        str += to_string(mat3[i][i]) + "_";
    }

    // Elements on right, bottom to top --- doesnt work
    for (int i = N-1; i >= 0; i--) {
        str += to_string(mat3[i][N-1]) + "_";
    }

    // Diagonal top-right to bottom-left --- works
    for (int i = 0, j = N-1; i < N, j >= 0; i++, j--) {
        str += to_string(mat3[i][j]) + "_";
    }

    // Elements on left, bottom to top --- works
    for (int i = N-1; i >= 0; i--) {
        str += to_string(mat3[i][0]) + "_"; 
    }

    cout << str << endl;
    cout << getSumLeftDigits(str);
}