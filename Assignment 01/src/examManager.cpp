#include "../include/exammanager.h"

ExamManager::ExamManager (Logger &l):log(l){}

void ExamManager::loadMarks(){
    exams.clear();
    ifstream file("data/marks.txt");

    string course,name;
    int marks;

    while(file>>course>>name>>marks){
        exams.push_back(Exam(course,name,marks));
    }
    file.close();
}

void ExamManager::saveMarks(){
    ofstream file("data/marks.txt");

    for(auto &e:exams){
        file<<e.name<<" "<<e.course<<" "<<e.marks<<endl;
    }
    file.close();
}
void ExamManager::enterMarks() {
    string student, course;
    int marks;

    cout << "Enter student username: ";
    cin >> student;

    cout << "Enter course: ";
    cin >> course;

    cout << "Enter marks: ";
    cin >> marks;

    exams.push_back(Exam(student, course, marks));
    saveMarks();

    log.log("Marks Entered for: " + student);
    cout << "Marks saved!" << endl;
}
void ExamManager::viewMarks() {
    loadMarks();

    cout << "\n--- All Marks ---\n";
    for (auto &e : exams) {
        cout << e.name << " - " << e.course << " - " << e.marks << endl;
    }

    log.log("Viewed marks list");
}