// Objective: Implement sumArray as a function template that returns sum of n elements 
// of a vector. Types allowed: int or double. 
// Input: First line: type and n. Second line: n numbers. 
// Output: Sum (same type as input). 
// Example: 
// Input: 
// int 3 
// 1 2 3 
// Output: 
// 6 

#include <iostream>
using namespace std;
template <class t>
void sumArray(t arr[], int n){
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        s+= arr[i];
    }
    cout << s << endl;
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    int arr[n];
    cout << "Enter array elements:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sumArray(arr,n);
    return 0;
}