// 9. Priority Queue – K Largest Elements
// Given a vector of N integers and an integer K,
// print the K largest elements using a priority_queue.

#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> v(N);
    for (int i = 0; i < N; i++) {
        cin >> v[i];
    }

    int K;
    cin >> K;

    priority_queue<int> pq;
    for (int x : v) {
        pq.push(x);
    }

    for (int i = 0; i < K && !pq.empty(); i++) {
        cout << pq.top() << " ";
        pq.pop();
    }

    return 0;
}
