// 8. File Encryption Program

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream fin("data/s8-p8.txt");
    ofstream fout("data/s8-p8-encrypted.txt");

    char ch;
    while (fin.get(ch)) {
        fout.put(ch + 2);
    }

    cout << "File encrypted";

    fin.close();
    fout.close();
    return 0;
}
