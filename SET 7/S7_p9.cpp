// Problem 9 — boundedPush (stack with exception message)
// Objective: Implement very small stack with capacity cap (cap ≤ 5).
// Read cap, then m commands (push x or pop).
// On push when full print Full.
// On pop when empty print Empty, otherwise print popped value.

#include <iostream>
using namespace std;

int main()
{
    int cap, m;
    cin >> cap >> m;

    int stack[5];
    int top = -1;

    for (int i = 0; i < m; i++)
    {
        string cmd;
        cin >> cmd;

        if (cmd == "push")
        {
            int x;
            cin >> x;

            if (top == cap - 1)
            {
                cout << "Full" << endl;
            }
            else
            {
                stack[++top] = x;
            }
        }
        else if (cmd == "pop")
        {
            if (top == -1)
            {
                cout << "Empty" << endl;
            }
            else
            {
                cout << stack[top--] << endl;
            }
        }
    }

    return 0;
}
