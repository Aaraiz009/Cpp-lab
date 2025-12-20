// 2. Employee Salary Slip Generator
// Concepts: Constructor overloading, array of objects, computation logic
// Problem:
// Define a class Employee with data members id, name, basicSalary, hra, da, and netSalary.
// • Overload constructors: one default and one parameterized.
// • Store records of n employees in an array.
// • Calculate and display netSalary = basicSalary + hra + da.
// • Display employee(s) earning above ₹50,000.

#include <iostream>
using namespace std;

class Employee
{
public:
    int id;
    string name;
    float basicSalary, hra, da, netSalary;

    Employee()
    {
        netSalary = 0;
    }

    Employee(int i, string n, float b, float h, float d)
    {
        id = i;
        name = n;
        basicSalary = b;
        hra = h;
        da = d;
        netSalary = basicSalary + hra + da;
    }

    void display()
    {
        cout << id << " " << name << " " << netSalary << endl;
    }
};

int main()
{
    int n;
    cin >> n;

    Employee emp[n];

    for (int i = 0; i < n; i++)
    {
        int id;
        string name;
        float b, h, d;

        cin >> id >> name >> b >> h >> d;
        emp[i] = Employee(id, name, b, h, d);
    }

    for (int i = 0; i < n; i++)
    {
        if (emp[i].netSalary > 50000)
        {
            emp[i].display();
        }
    }

    return 0;
}
