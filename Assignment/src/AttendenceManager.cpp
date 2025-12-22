#include "../include/attendencemanager.h"
#include <fstream>
#include<iostream>
using namespace std;

AttendenceManager::AttendenceManager(Logger &l): log(l){}

void AttendenceManager ::loadAttendence(){
    records.clear();
    ifstream file("data/attendence.txt");

    string d,c,n,s;
    while(file>>d>>c>>n>>s){
        records.push_back(Attendence(d,c,n,s));
    }
    file.close();

}

void AttendenceManager ::saveAttendence(){
    ofstream file("data/attendence.txt");
    for(auto &r : records){
        file<<r.date<<" "
        <<r.course<<" "
        <<r.name<<" "
        <<r.status<<endl;
    }
    file.close();
}

void AttendenceManager::markAttendence(){
    string date, course, name, status;

    cout<<"Enter the date :";
    cin>>date;
    cout<<"Enter the course :";
    cin>>course;
    cout<<"Enter the username :";
    cin>>name;
    cout<<"Mark Present(P) or Absent(A)";
    cin>>status;

    records.push_back(Attendence(date, course, name, status));
    saveAttendence();
    cout<<"Attendence Marked!"<<endl;
}
void::AttendenceManager::viewAttendence(){
string user;
cout<<"ENter the username to view attendence";
cin>>user;
cout<<endl<<"Attendence for "<<user<<endl;

for(auto &r:records){
    if (r.name == user){
        cout<<r.course<<" "<<r.date<<" "<<r.status<<" ";
    }

    log.log("Attendence Viewed for user" + user);
}}