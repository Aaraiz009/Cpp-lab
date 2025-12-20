// 8. Stack – Check Balanced Parentheses
// Given a string containing {}, (), and [],
// determine whether it is balanced using a stack.

#include <iostream>
#include <stack>
using namespace std;

int main() {
    string s;
    cin >> s;

    stack<char> st;
    bool balanced = true;

    for (char ch : s) {
        if (ch == '(' || ch == '{' || ch == '[') {
            st.push(ch);
        } else {
            if (st.empty()) {
                balanced = false;
                break;
            }
            char top = st.top();
            st.pop();

            if ((ch == ')' && top != '(') ||
                (ch == '}' && top != '{') ||
                (ch == ']' && top != '[')) {
                balanced = false;
                break;
            }
        }
    }

    if (!st.empty())
        balanced = false;

    if (balanced)
        cout << "Balanced";
    else
        cout << "Not Balanced";

    return 0;
}
