#include "../include/CourseManager.h"
#include <fstream>

CourseManager::CourseManager (Logger &log): log(log){}

void CourseManager::loadCourses() {
    courses.clear();
    ifstream file("../data/courses.txt");

    string id, title;
    int credits, cap;

    while (file >> id >> title >> credits >> cap) {
        courses.push_back(Course(id, title, credits, cap));
    }

    file.close();
}

void CourseManager::saveCourses() {
    ofstream file("../data/courses.txt");

    for (auto &c : courses) {
        file << c.courseID << " "
             << c.title << " "
             << c.credits << " "
             << c.capacity << endl;
    }

    file.close();
}
void CourseManager::addCourse() {
    string id, title;
    int credits, cap;

    cout << "Enter Course ID: ";
    cin >> id;

    cout << "Enter Title: ";
    cin >> title;

    cout << "Enter Credits: ";
    cin >> credits;

    cout << "Enter Capacity: ";
    cin >> cap;

    courses.push_back(Course(id, title, credits, cap));
    saveCourses();

    cout << "Course added successfully!\n";
    log.log("Course added: " + id);
}

void CourseManager::updateCourse() {
    string id;
    cout << "Enter Course ID to update: ";
    cin >> id;

    for (auto &c : courses) {
        if (c.courseID == id) {
            cout << "New Title: ";
            cin >> c.title;
            cout << "New Credits: ";
            cin >> c.credits;
            cout << "New Capacity: ";
            cin >> c.capacity;

            saveCourses();
            cout << "Course updated!\n";
            log.log("Course updated: " + id);
            return;
        }
    }

    cout << "Course not found.\n";
}
void CourseManager::deleteCourse() {
    string id;
    cout << "Enter Course ID to delete: ";
    cin >> id;

    for (int i = 0; i < courses.size(); i++) {
        if (courses[i].courseID == id) {
            courses.erase(courses.begin() + i);
            saveCourses();
            log.log("Course deleted: " + id);
            cout << "Course deleted!\n";
            return;
        }
    }

    cout << "Course not found.\n";
}

void CourseManager::enrollStudent() {
    string id, student;
    cout << "Enter Course ID: ";
    cin >> id;

    cout << "Enter Student Username: ";
    cin >> student;

    for (auto &c : courses) {
        if (c.courseID == id) {
            if (c.enrolledStudents.size() < c.capacity) {
                c.enrolledStudents.push_back(student);
                saveCourses();
                cout << "Student enrolled.\n";
                log.log(student + " enrolled in " + id);
                return;
            }
            else {
                cout << "Course is full.\n";
                return;
            }
        }
    }

    cout << "Course not found.\n";
}
void CourseManager::dropStudent() {
    string id, student;
    cout << "Enter Course ID: ";
    cin >> id;

    cout << "Enter Student Username: ";
    cin >> student;

    for (auto &c : courses) {
        if (c.courseID == id) {

            for (int i = 0; i < c.enrolledStudents.size(); i++) {
                if (c.enrolledStudents[i] == student) {
                    c.enrolledStudents.erase(c.enrolledStudents.begin() + i);
                    saveCourses();
                    cout << "Student dropped.\n";
                    log.log(student + " dropped from " + id);
                    return;
                }
            }

            cout << "Student not found in course.\n";
            return;
        }
    }

    cout << "Course not found.\n";
}
void CourseManager::printAllCourses() {
    for (auto &c : courses) {
        cout << c.courseID << " "
             << c.title << " "
             << c.credits << " "
             << c.capacity << endl;
    }
}


