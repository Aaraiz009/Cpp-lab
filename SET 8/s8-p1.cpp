// 1. Display File Contents

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream fin("data/s8-p1.txt");

    if (!fin) {
        cout << "Error opening file";
        return 0;
    }

    string line;
    while (getline(fin, line)) {
        cout << line << endl;
    }

    fin.close();
    return 0;
}
