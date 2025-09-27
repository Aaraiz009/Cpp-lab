// 3. Sum of Even and Odd Elements 
// Given an array of integers, write a program to find the sum of even elements and 
// odd elements separately using pointer arithmetic.

#include <iostream>
using namespace std;

int main() {
    
    int n, oddSum = 0, *ptr, evenSum = 0;
    cout << "Enter sixe of array: " << endl;
    cin >> n;
    int arr[n];
    ptr = arr;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if ( (*ptr % 2) == 0)
        {
            evenSum += *ptr;
        } else
        {
            oddSum += *ptr;
        }
        
        ptr++;
    }
    cout << "even sum " << evenSum << endl;
    cout << "odd sum " << oddSum << endl;
    return 0;
}
