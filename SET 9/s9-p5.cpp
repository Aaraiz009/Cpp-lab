// 5. Multiset – Frequency Tracking
// Insert N integers into a multiset.
// Then delete one occurrence of an integer X if it exists.
// Print all remaining elements.

#include <iostream>
#include <set>
using namespace std;

int main() {
    int N;
    cin >> N;

    multiset<int> ms;
    for (int i = 0; i < N; i++) {
        int x;
        cin >> x;
        ms.insert(x);
    }

    int X;
    cin >> X;

    auto it = ms.find(X);
    if (it != ms.end()) {
        ms.erase(it);
    }

    for (int val : ms) {
        cout << val << " ";
    }

    return 0;
}
