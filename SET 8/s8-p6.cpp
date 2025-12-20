// 6. Word Search Inside a Text File

#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;

int main() {
    ifstream fin("data/s8-p6.txt");

    string word, temp;
    cin >> word;

    transform(word.begin(), word.end(), word.begin(), ::tolower);

    int count = 0;
    while (fin >> temp) {
        transform(temp.begin(), temp.end(), temp.begin(), ::tolower);
        if (temp == word)
            count++;
    }

    cout << count;
    fin.close();
    return 0;
}
