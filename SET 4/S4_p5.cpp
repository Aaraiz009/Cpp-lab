#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    int marks;
    Student() {
        name = "Default";
        marks = 0;
    }
};

bool compare(Student s1, Student s2) {
    return s1.marks > s2.marks;
}

int main() {
    Student s1, s2;
    s1.name = "Alice";
    s1.marks = 85;
    s2.name = "Bob";
    s2.marks = 90;

    cout << "Comparing students:" << endl;
    cout << s1.name << " marks: " << s1.marks << endl;
    cout << s2.name << " marks: " << s2.marks << endl;
    if (compare(s1, s2)) {
        cout << s1.name << " has higher marks." << endl;
    } else {
        cout << s2.name << " has higher or equal marks." << endl;
    }
    return 0;
}
