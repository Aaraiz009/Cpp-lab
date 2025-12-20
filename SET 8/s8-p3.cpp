// 3. Copy Content From One File to Another

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream fin("data/s8-p3-src.txt");
    ofstream fout("data/s8-p3-dest.txt");

    if (!fin || !fout) {
        cout << "File error";
        return 0;
    }

    string line;
    while (getline(fin, line)) {
        fout << line << endl;
    }

    cout << "File copied successfully";

    fin.close();
    fout.close();
    return 0;
}
