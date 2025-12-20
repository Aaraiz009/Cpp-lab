// 6. Counting Word Frequency
// Given N strings, count the frequency of each using map<string, int>.
// Print the words in lexicographical order with their frequencies.

#include <iostream>
#include <map>
using namespace std;

int main() {
    int N;
    cin >> N;

    map<string, int> freq;
    for (int i = 0; i < N; i++) {
        string word;
        cin >> word;
        freq[word]++;
    }

    for (auto p : freq) {
        cout << p.first << " " << p.second << endl;
    }

    return 0;
}
