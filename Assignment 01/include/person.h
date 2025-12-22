#ifndef PERSON_H
#define PERSON_H

#include <iostream>
using namespace std;

class Person
{
protected:
    string name;
    string email;
    string address;
    string phnumber;

public:
    Person() {}
    Person(string n, string e, string a, string p)
    {
        name = n;
        email = e;
        address = a;
        phnumber = p;
    }

    virtual void printProfile()
    {
        cout << "Name :" << name << endl;
        cout << "Email :" << email << endl;
        cout << "Address :" << address << endl;
        cout << "Phone number :" << phnumber << endl;
    }
};
#endif