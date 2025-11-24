// 8. Display a 3D Matrix 
// Write a program to input and print elements of a 3 x 3 x 3 cube using only pointers 
// (no arr[i][j][k] syntax). 

#include <iostream>
using namespace std;

int main() {
    int A[3][3][3];
    int *p = (int*)A;  

    cout << "Enter 27 elements for 3x3x3 matrix (cube):\n";
    for (int i = 0; i < 27; i++) {
        cin >> *(p + i);   
    }

    cout << "\n3D Matrix (Cube) Elements:\n";
    for (int i = 0; i < 3; i++) {
        cout << "Layer " << i + 1 << ":\n";
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                cout << *(p + i*9 + j*3 + k) << " ";
                // i*9 because each layer has 3*3 = 9 elements
                // j*3 because each row has 3 elements
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}
