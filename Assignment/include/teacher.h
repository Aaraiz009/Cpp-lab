#ifndef TEACHER_H
#define TEACHER_H

#include "Person.h"

class Teacher : public Person
{
    int salary;
    string dept;
    string course;

public:
    Teacher() {}

    Teacher(string n, string e, string a, string p, int s, string d, string c)
        : Person(n, e, a, p)
    {
        salary = s;
        dept = d;
        course = c;
    }

    void printProfile() override
    {
        Person::printProfile();
        cout << "Salary :" << salary << endl;
        cout << "Department :" << dept << endl;
        cout << "Course :" << course << endl;
    }

    string getDept()
    {
        return dept;
    }

    string getCourse()
    {
        return course;
    }
};

#endif
