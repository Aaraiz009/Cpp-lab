// 1. Student Result Management System
// Concepts: Array of objects, data input/output, aggregation logic
// Problem:
// Create a class Student with members: rollNo, name, marks[5], and total.
// • Use an array of Student objects to store data of n students.
// • Calculate and display the total marks and the student with the highest total.
// Hint:
// Loop through array, call member functions for input and calculation.

#include <iostream>
using namespace std;

class Student
{
public:
    int rollNo;
    string name;
    int marks[5];
    int total;

    void getData()
    {
        total = 0;
        cin >> rollNo >> name;
        for (int i = 0; i < 5; i++)
        {
            cin >> marks[i];
            total += marks[i];
        }
    }

    void showData()
    {
        cout << "Roll No: " << rollNo
             << ", Name: " << name
             << ", Total: " << total << endl;
    }
};

int main()
{
    int n;
    cin >> n;

    Student students[n];

    for (int i = 0; i < n; i++)
    {
        students[i].getData();
    }

    int topperIndex = 0;
    for (int i = 1; i < n; i++)
    {
        if (students[i].total > students[topperIndex].total)
        {
            topperIndex = i;
        }
    }

    for (int i = 0; i < n; i++)
    {
        students[i].showData();
    }

    cout << "Highest Scorer -> ";
    students[topperIndex].showData();

    return 0;
}
