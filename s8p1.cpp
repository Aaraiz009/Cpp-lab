#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string filename;
    cout << "Enter the name of the text file: ";
    getline(cin, filename);

    ifstream file(filename);
    if (!file.is_open()) {
        cout << "Error: Unable to open file \"" << filename << "\"" << endl;
        return 1;
    }

    string line;
    cout << "Contents of the file \"" << filename << "\":" << endl;
    while (getline(file, line)) {
        cout << line << endl;
    }

    file.close();
    return 0;
}
