#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string sourceFile, destFile;

    
    cout << "Enter source file name: ";
    cin >> sourceFile;

    cout << "Enter destination file name: ";
    cin >> destFile;


    ifstream source(sourceFile);
    if (!source) {
        cout << "Error: Could not open source file." << endl;
        return 1;
    }

    
    ofstream dest(destFile);
    if (!dest) {
        cout << "Error: Could not open destination file." << endl;
        return 1;
    }
};
