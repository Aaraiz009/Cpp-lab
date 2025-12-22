#ifndef EXAM_H
#define EXAM_H
#include <iostream>
using namespace std;

class Exam{
    public:
    string course;
    string name;
    int marks;

    Exam(){}
    Exam(string c, string n, int m){
        course = c;
        name = n; 
        marks = m;
    }

    // Operator < for sorting (lowest → highest)
    bool operator<(const Exam &others)const{
        return marks<others.marks;
    }
};
#endif