// 7. First Non-Repeating Element Using Map
// Given N integers, find the first element that appears exactly once
// using an unordered_map.
// If none exists, print -1.

#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> arr(N);
    unordered_map<int, int> freq;

    for (int i = 0; i < N; i++) {
        cin >> arr[i];
        freq[arr[i]]++;
    }

    bool found = false;
    for (int i = 0; i < N; i++) {
        if (freq[arr[i]] == 1) {
            cout << arr[i];
            found = true;
            break;
        }
    }

    if (!found)
        cout << -1;

    return 0;
}
