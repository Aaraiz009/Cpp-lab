// 4. Append User Input to Existing File

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream fout("data/s8-p4.txt", ios::app);

    if (!fout) {
        cout << "File error";
        return 0;
    }

    string line;
    while (true) {
        getline(cin, line);
        if (line == "STOP")
            break;
        fout << line << endl;
    }

    cout << "Data appended successfully";

    fout.close();
    return 0;
}
