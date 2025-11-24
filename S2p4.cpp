// 4. Matrix Addition 
// Input two 2D matrices (size m x n) and find their sum. Pass the 2D arrays to a 
// function using pointers. 

#include <iostream>
using namespace std;

void addMatrices(int *a, int *b, int *c, int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            *(c + i * n + j) = *(a + i * n + j) + *(b + i * n + j);
        }
    }
}

int main() {
    int m, n;
    cout << "Enter number of rows and columns: ";
    cin >> m >> n;

    int A[m][n], B[m][n], C[m][n];

    cout << "Enter elements of first matrix:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> A[i][j];
        }
    }

    cout << "Enter elements of second matrix:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> B[i][j];
        }
    }

    addMatrices((int*)A, (int*)B, (int*)C, m, n);

    cout << "Resultant Matrix after Addition:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
