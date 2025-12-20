// 2. Count Characters, Words, and Lines

#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

int main() {
    ifstream fin("data/s8-p2.txt");

    if (!fin) {
        cout << "File not found";
        return 0;
    }

    string line, word;
    int chars = 0, words = 0, lines = 0;

    while (getline(fin, line)) {
        lines++;
        chars += line.length();

        stringstream ss(line);
        while (ss >> word)
            words++;
    }

    cout << "Characters: " << chars << endl;
    cout << "Words: " << words << endl;
    cout << "Lines: " << lines << endl;

    fin.close();
    return 0;
}
