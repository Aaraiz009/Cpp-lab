#include <iostream>
#include <string.h>
using namespace std;

class Student {
    public:
    int roll;
    string name;
};

int main() {
    Student s1;
    s1.roll = 1;
    s1.name = "Anshuman";

    cout<<"Name: " << s1.name << ",  Roll no.: " << s1.roll << endl;
    return 0;
}
