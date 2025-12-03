#include <iostream>
using namespace std;

class Account {
public:
    float balance;
    Account() {
        balance = 1000.0;
    }
    void transfer(Account *other, float amount) {
        if (balance >= amount) {
            balance -= amount;
            other->balance += amount;
        } else {
            cout << "Insufficient balance." << endl;
        }
    }
};

int main() {
    Account a1, a2;
    cout << "Account 1 balance: " << a1.balance << endl;
    cout << "Account 2 balance: " << a2.balance << endl;

    a1.transfer(&a2, 200.0);
    cout << "After transfer:" << endl;
    cout << "Account 1 balance: " << a1.balance << endl;
    cout << "Account 2 balance: " << a2.balance << endl;
    return 0;
}
