// 7. File Copy Using get() and put()

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream fin("data/s8-p7-src.txt");
    ofstream fout("data/s8-p7-dest.txt");

    if (!fin || !fout) {
        cout << "File error";
        return 0;
    }

    char ch;
    while (fin.get(ch)) {
        fout.put(ch);
    }

    cout << "Copy completed";

    fin.close();
    fout.close();
    return 0;
}
