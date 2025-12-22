#ifndef ATTENDENCE_H
#define ATTENDENCE_H

#include <string>
using namespace std;

class Attendence {
public:
    string date;
    string course;
    string name;
    string status;

    Attendence() {}

    Attendence(string d, string c, string n, string s) {
        date = d;
        course = c;
        name = n;
        status = s;
    }
};

#endif
