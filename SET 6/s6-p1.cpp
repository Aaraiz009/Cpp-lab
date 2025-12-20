// 1
//  ️. Basic Inheritance: Display Information 
// Topic: Single Inheritance 
// Problem: 
// Create a class Person with data members name and age. Derive a class Student from 
// Person that adds a data member course. 
// Write a program to input and display details of a student. 
// Learning Outcome: Understanding of single inheritance and protected access specifier.

#include <iostream>
using namespace std;

class Person{
protected:
    string name;
    int age;
};
class Student: public Person{
private:
    string course;
public:
    void setData(){
        cout << "Enter student details:\n";
        cout << "Enter name, age and course\n";
        cin >> name >> age >> course;
    }
    void displayData(){
        cout << "Name is : " << name;
        cout << "\nAge is : " << age;
        cout << "\nCourse is : " << course;
    }
};
int main() {
    
    Student s1;
    s1.setData();
    s1.displayData();
    return 0;
}