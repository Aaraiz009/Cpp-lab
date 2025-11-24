// 6. Row-wise Maximum 
// Given a 2D array of integers, write a program to find the maximum element of 
// each row using pointers.

#include <iostream>
using namespace std;

void rowWiseMax(int *a, int m, int n) {
    for (int i = 0; i < m; i++) {
        int maxVal = *(a + i*n + 0);  // first element of row i
        for (int j = 1; j < n; j++) {
            if (*(a + i*n + j) > maxVal) {
                maxVal = *(a + i*n + j);
            }
        }
        cout << "Maximum of row " << i + 1 << " = " << maxVal << endl;
    }
}

int main() {
    int m, n;
    cout << "Enter number of rows and columns: ";
    cin >> m >> n;

    int A[m][n];

    cout << "Enter elements of the matrix:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> A[i][j];
        }
    }

    rowWiseMax((int*)A, m, n);

    return 0;
}
