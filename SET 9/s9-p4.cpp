// 4. Unique Elements Using Set
// Given N integers, insert them into a set and print them in sorted order.
// Then check if an integer X exists in the set and print "YES" or "NO".

#include <iostream>
#include <set>
using namespace std;

int main() {
    int N;
    cin >> N;

    set<int> s;
    for (int i = 0; i < N; i++) {
        int x;
        cin >> x;
        s.insert(x);
    }

    for (int val : s) {
        cout << val << " ";
    }
    cout << endl;

    int X;
    cin >> X;

    if (s.find(X) != s.end())
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
