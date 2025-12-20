// 8. The Diamond Problem (Moderate)
// Topic: Virtual Base Classes
// Problem:
// Create a class Person, derive Teacher and Student from it,
// and then derive a class TA from both Teacher and Student.
// Demonstrate the diamond problem and resolve it using virtual inheritance.
// Learning Outcome: Understanding the diamond problem and how virtual
// inheritance eliminates duplication of base class members.

#include <iostream>
using namespace std;

class Person {
protected:
    string name;

public:
    void setName(string n) {
        name = n;
    }
};

class Teacher : virtual public Person {
protected:
    string subject;

public:
    void setSubject(string s) {
        subject = s;
    }
};

class Student : virtual public Person {
protected:
    string course;

public:
    void setCourse(string c) {
        course = c;
    }
};

class TA : public Teacher, public Student {
public:
    void display() {
        cout << "Name: " << name << endl;
        cout << "Subject: " << subject << endl;
        cout << "Course: " << course << endl;
    }
};

int main() {
    TA ta;

    ta.setName("Anshuman");
    ta.setSubject("OOP");
    ta.setCourse("CSE");

    ta.display();
    return 0;
}
