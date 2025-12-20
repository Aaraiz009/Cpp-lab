// 1 . Vector Basics – Insert & Print 
// Given an integer N, followed by N integers, store them in a vector. 
// Then insert a new integer X at position P (0-indexed). 
// Print the final vector. 
// Input: 
// N   
// a1 a2 … aN   
// X P 
// Output: Final vector elements. 


#include <iostream>
#include<vector>
using namespace std;

int main() {
    int n;
    cout << "Enter n:"<< endl;
    cin >> n;
    vector<int> v(n);
    cout << "Enter vecctor elements\n";
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int x,p;
    cout << "Enter elelment and position to add in the vector\n";
    cin >> x >> p;
    v.insert(v.begin()+p-1, x);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}