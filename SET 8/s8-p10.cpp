// 9. File Existence Check and Auto-Creation

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream fin("data/s8-p9.txt");

    if (fin) {
        cout << "File already exists";
    } else {
        ofstream fout("data/s8-p9.txt");
        fout << "This file was automatically created because it did not exist.";
        fout.close();
        cout << "File created";
    }

    return 0;
}
