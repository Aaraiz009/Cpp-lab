// Problem 4 — scaleVector (Function template) 
// Objective: Implement scaleVector<T>(vector<T>& v, T factor) that multiplies every 
// element by factor. Read vector, scale, print result. 
// Input: type n, then n elements, then factor. 
// Output: scaled elements space-separated. 

#include <iostream>
using namespace std;
template <class t>
void scaleVector(t arr[], int n, t num){
    for (int i = 0; i < n; i++)
    {
        cout << num * arr[i] << " ";
    }
}

int main() {
    int n = 5;
    int arr[n] = {1,2,3,4,5};
    int num = 2;
    scaleVector(arr,n,num);
    return 0;
}