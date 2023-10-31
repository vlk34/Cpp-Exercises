#include <iostream>
#define S 3
using namespace std;
template <class T>
double getDeterminant(T mat[S][S])
{
    double ans = 0.0;

    double prod = 1.0; // will temporarily store the product of each diagonal

    // diagonals from left to right
    for (int i = 0; i < S; i++)
    {
        prod = 1.0; //init to 1 for identity property of multiplication
        int j = i; //each diagonal will start with an index for rows equal to 'i' of the outer loop
        for (int k = 0; k < S; k++)
        {
            prod *= (double)mat[j++][k];
            if (j == S) // when j goes out of bounds...
                j = 0; // ... restart from 0
        }

        ans += prod; // add the product of the diagonal to the determinant
    }

    // diagonals from right to left
    for (int i = 0; i < S; i++)
    {
        prod = 1.0; // init to 1 for identity property of multiplication
        int j = i; //each diagonal will start with an index for rows equal to 'i' of the outer loop
        for (int k = S - 1; k >= 0; k--) // index of columns goes backwards!
        {
            prod *= (double)mat[j++][k];
            if (j == S) // when j goes out of bounds...
            j = 0; // ... restart from 0
        }

        ans -= prod; // subtract the product of the diagonal from the determinant
    }
    return ans;
}

int main(){
    int mat[3][3] = {1, -2, 4, -5, 2, 0, 1, 0, 3};
    if(getDeterminant<int>(mat) == -32)
        cout << "ok";
    else
        cout << "error";
    cout << endl;

    double mat2[3][3] = {5.6, -3.2,0.5, -6.1, -5.4, 0.8, 4.3, -1.2, -3.3};
    if(getDeterminant<double>(mat2) == 173.846)
        cout << "ok";
    else
        cout << "error";
    cout << endl;

    float mat3[3][3] = {11.5f, -6.5f, 38.6f, -4.2f, 9.0f, 13.5f, -4.4f, 14.5f, -0.6f};
    if((int)getDeterminant<float>(mat3) == -2732)
        cout << "ok";
    else
        cout << "error";
    cout << endl;
}