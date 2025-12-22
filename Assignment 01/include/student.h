#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"

class Student : public Person
{
    int rollno;
    string branch;
    string sem;

public:
    Student() {}
    Student(string n, string e, string a, string p, int r, string b, string s)
        : Person(n, e, a, p)
    {
        rollno = r;
        branch = b;
        sem = s;
    }

    void printProfile() override
    {
        Person::printProfile();
        cout << "Roll no :" << rollno << endl;
        cout << "Semester :" << sem << endl;
        cout << "Branch :" << branch << endl;
    }

    string getBranch()
    {
        return branch;
    }
};

#endif
