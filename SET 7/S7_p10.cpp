// Problem 10 — openTxt (simple file-type check)
// Objective: Read a filename string. If it ends with .txt print OK;
// else throw and catch a custom exception and print Not txt.
// Implement a small custom exception class with what()
// returning "Not txt".
// Input: filename (single token).
// Output: OK or Not txt
// Example: notes.txt → OK ; data.csv → Not txt

#include <iostream>
#include <exception>
using namespace std;

class NotTxtException : public exception {
public:
    const char* what() const noexcept {
        return "Not txt";
    }
};

int main() {
    string filename;
    cin >> filename;

    try {
        if (filename.size() < 4 ||
            filename.substr(filename.size() - 4) != ".txt") {
            throw NotTxtException();
        }
        cout << "OK";
    }
    catch (NotTxtException& e) {
        cout << e.what();
    }

    return 0;
}
