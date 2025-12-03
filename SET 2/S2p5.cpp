// 5. Transpose of Matrix 
// Write a program to find the transpose of a given n x n matrix using pointer 
// notation. 

#include <iostream>
using namespace std;

void transposeMatrix(int *a, int *t, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            *(t + j*n + i) = *(a + i*n + j);  
        }
    }
}

int main() {
    int n;
    cout << "Enter the size of square matrix (n x n): ";
    cin >> n;

    int A[n][n], T[n][n];

    cout << "Enter elements of the matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> A[i][j];
        }
    }

    transposeMatrix((int*)A, (int*)T, n);

    cout << "Transpose of the Matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << T[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
