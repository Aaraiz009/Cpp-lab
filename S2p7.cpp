// 7. Sum of All Elements 
// Input elements of a 2 x 2 x 2 3D array and find the sum of all elements using 
// pointer arithmetic.

#include <iostream>
using namespace std;

int main() {
    int A[2][2][2];   
    int *p = (int*)A; 
    int sum = 0;

    cout << "Enter 8 elements for 2x2x2 array:\n";
    for (int i = 0; i < 8; i++) {
        cin >> *(p + i);  
    }

    for (int i = 0; i < 8; i++) {
        sum += *(p + i);
    }

    cout << "Sum of all elements = " << sum << endl;

    return 0;
}
