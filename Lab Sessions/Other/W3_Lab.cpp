#include <iostream>
using namespace std;

void swap(int &a, int &b) {

    int temp = a;
    a = b;
    b = temp;
}

void sort(int *arr, const int n) {

    for (int i = 0; i < n-1; i++)
        for (int j = i + 1; j < n; j++)
            if (arr[i] > arr[j])
                swap(arr[i], arr[j]);
}

int kthArray(int *arr, const int n, const int k) {

    if (n == 0)
        return 0;       // if array is empty, return 0
    sort(arr, n);       // call selection sort
    return arr[k - 1];  // return k-th element
}

int main() {

    const int n = 5;        // size of array
    int arr[n] = {3, 5, 2, 7, 22};

    cout << kthArray(arr, n, 3);
    return 0;
}