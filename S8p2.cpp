// 2. Count Characters, Words, and Lines 
// Create a C++ program that reads a text file and counts the total number of characters, 
// words, and lines present in it. Use file-handling functions and string processing 
// techniques. Display all three counts separately at the end. 


#include <iostream>
#include <fstream>

using namespace std;

int main() {

    ifstream file("../data/s1p1.txt");
    if (!file.is_open()) {
        cout << "Error: Unable to open file ";
        return 1;
    }

    string line;
    string word;
    char ch;
    int l;
    int c;
    int w;
    cout << "Contents of the file ";
    while (getline(file, line)) {
        l++;
    }
    while (file.get(ch)) {
        c++;
    }
    while (file >> word) {
        w++;
    }
    cout <<"No. of lines= " << l << endl;
    cout <<"No. of words= " << w << endl;
    cout <<"No. of characters= " << c << endl;

    file.close();
    return 0;
}
