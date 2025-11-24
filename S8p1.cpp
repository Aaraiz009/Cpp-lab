ni// 1. Display File Contents 
// Write a C++ program that asks the user to enter the name of a text file. The program 
// should open the file using ifstream, read its contents line by line using getline(), and 
// display the entire content on the screen. If the file does not exist or cannot be opened, 
// display an appropriate error message. 

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
