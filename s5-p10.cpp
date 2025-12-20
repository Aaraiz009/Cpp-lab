// 10. Student Result Ranking System
// Concepts: Array of objects, sorting, encapsulation
// Problem:
// Design a class Student with members:
// rollNo, name, marks[3], total, and grade.
// • Calculate total and grade.
// • Sort the array by total marks.
// • Display the rank list.

#include <iostream>
using namespace std;

class Student
{
public:
    int rollNo;
    string name;
    int marks[3];
    int total;
    char grade;

    void getData()
    {
        total = 0;
        cin >> rollNo >> name;
        for (int i = 0; i < 3; i++)
        {
            cin >> marks[i];
            total += marks[i];
        }

        if (total >= 270)
            grade = 'A';
        else if (total >= 240)
            grade = 'B';
        else
            grade = 'C';
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

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (students[i].total < students[j].total)
            {
                swap(students[i], students[j]);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << " "
             << students[i].rollNo << " "
             << students[i].name << " "
             << students[i].total << " "
             << students[i].grade << endl;
    }

    return 0;
}
