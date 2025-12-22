#ifndef ADMIN_H
#define ADMIN_H

#include "Person.h"

class Admin : public Person
{
    string empId;
    string adminLevel;

public:
    Admin() {}

    Admin(string n, string e, string a, string p, string ei, string al)
        : Person(n, e, a, p)
    {
        empId = ei;
        adminLevel = al;
    }

    void printProfile() override
    {
        Person::printProfile();
        cout << "Employee Id :" << empId << endl;
        cout << "Admin Level :" << adminLevel << endl;
    }

    string getAdmin()
    {
        return adminLevel;
    }
    string getEmpid()
    {
        return empId;
    }
};

#endif
