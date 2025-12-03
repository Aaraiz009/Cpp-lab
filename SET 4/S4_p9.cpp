#include <iostream>
using namespace std;

class Matrix {
public:
    int mat[2][2];
    Matrix() {
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                mat[i][j] = 0;
            }
        }
    }
    Matrix add(Matrix other) {
        Matrix result;
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                result.mat[i][j] = mat[i][j] + other.mat[i][j];
            }
        }
        return result;
    }
};

int main() {
    Matrix m1, m2;
    m1.mat[0][0] = 1; m1.mat[0][1] = 2;
    m1.mat[1][0] = 3; m1.mat[1][1] = 4;
    m2.mat[0][0] = 5; m2.mat[0][1] = 6;
    m2.mat[1][0] = 7; m2.mat[1][1] = 8;

    cout << "Matrix 1:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << m1.mat[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Matrix 2:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << m2.mat[i][j] << " ";
        }
        cout << endl;
    }

    Matrix sum = m1.add(m2);
    cout << "Sum:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << sum.mat[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
