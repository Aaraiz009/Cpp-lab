#ifndef USER_H
#define USER_H

#include "Person.h"

class User : public Person
{
    string username;
    string password;

public:
    User() {};
    User(string n, string e, string a, string p, string u, string pass)
        : Person(n, e, a, p)
    {
        username = u;
        password = pass;
    }

    void printProfile() override
    {
        Person::printProfile();
        cout << "Username :" << username << endl;
    }

    string getUser()
    {
        return username;
    }
    void setPass(string p)
    {
        password = p;
    }
    string getPass()
    {
        return password;
    }
};

#endif
