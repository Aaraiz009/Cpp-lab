#ifndef COURSE_H
#define COURSE_H

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Course {
public:
    string courseID;
    string title;
    int credits;
    int capacity;
    vector<string> enrolledStudents;

    Course() {}

    Course(string id, string t, int c, int cap)
        : courseID(id), title(t), credits(c), capacity(cap) {}

    void printCourse() {
        cout << "Course ID: " << courseID << endl;
        cout << "Title: " << title << endl;
        cout << "Credits: " << credits << endl;
        cout << "Capacity: " << capacity << endl;
        cout << "Enrolled Students: ";

        for (auto &s : enrolledStudents){
            cout << s << " ";
        }
        cout << endl;
    }
};

#endif
