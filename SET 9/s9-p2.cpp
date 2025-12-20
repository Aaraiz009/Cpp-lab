// 2. Vector – Remove All Occurrences
// Given a vector of N elements and an integer X, remove all occurrences of X using STL
// functions (e.g., erase-remove idiom).
// Print the updated vector.

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int n, X;
    cout << "Enter n:";
    cin >> n;
    vector<int> vec(n);
        cout << "Enter elements:";

    for(int i = 0; i < n; i++) {
        cin >> vec[i];
    }
        cout << "Enter X:";

    cin >> X;
    vec.erase(remove(vec.begin(), vec.end(), X), vec.end());
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout << endl;
    return 0;
}
