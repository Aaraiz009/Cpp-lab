// 5. Student Records Using Binary File

#include <iostream>
#include <fstream>
using namespace std;

class Student {
public:
    int roll;
    char name[20];
    float marks;
};

int main() {
    int n;
    cin >> n;

    Student s;
    ofstream fout("data/s10-p5.dat", ios::binary);

    for (int i = 0; i < n; i++) {
        cin >> s.roll >> s.name >> s.marks;
        fout.write((char*)&s, sizeof(s));
    }
    fout.close();

    ifstream fin("data/s8-p5.dat", ios::binary);
    while (fin.read((char*)&s, sizeof(s))) {
        cout << s.roll << " " << s.name << " " << s.marks << endl;
    }

    fin.close();
    return 0;
}
