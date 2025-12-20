// 4
//  ️. Multi-level Inheritance
// Topic: Multi-level Inheritance
// Problem:
// Create three classes — Person, Employee, and Manager — where Employee inherits from
// Person, and Manager inherits from Employee.
// Each class should add one extra data member and display all details.
// Learning Outcome: Understanding of inheritance hierarchy and passing data through

#include <iostream>
using namespace std;
class Person
{
protected:
    string name;
};

class Employee : public Person
{
protected:
    int id;
};

class Manager : public Employee
{
    float salary;

public:
    void setData()
    {
        cout << "Enter Employee name, id and salary\n";
        cin >> name >> id >> salary;
    }
    void displayData()
    {
        cout << "Employee name: " << name << "\nEmployee id: " << id << "\nEmployee salary: " << salary;
    }
};

int main()
{
    Manager m1;
    m1.setData();
    m1.displayData();
    return 0;
}