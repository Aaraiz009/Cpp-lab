#include <iostream>
#include "../include/logger.h"
#include "../include/AuthManager.h"
#include "../include/CourseManager.h"
#include "../include/AttendenceManager.h"
#include "../include/ExamManager.h"
#include "../include/LibraryManager.h"

using namespace std;

int main() {
    Logger log;
    log.openlog();
    log.log("SYSTEM STARTED");

    AuthManager auth(log);
    CourseManager course(log);
    AttendenceManager attendance(log);
    ExamManager exam(log);
    LibraryManager library(log);

    int choice;

    while (true) {
        cout << "\n===== MAIN MENU =====\n";
        cout << "1. Register\n";
        cout << "2. Login\n";
        cout << "3. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            auth.registerUser();
        }
        else if (choice == 2) {
            if (!auth.loginUser()) {
                cout << "Login failed!\n";
                continue;
            }

            string role = auth.getRole();
            string user = auth.getUser();

            log.log("LOGIN SUCCESS : " + user + " (" + role + ")");

            /* ================= STUDENT MENU ================= */
            if (role == "student") {
                int s;
                while (true) {
                    cout << "\n===== STUDENT MENU =====\n";
                    cout << "1. View Attendance\n";
                    cout << "2. View Marks\n";
                    cout << "3. Logout\n";
                    cin >> s;

                    if (s == 1) {
                        attendance.viewAttendence();   // views only
                    }
                    else if (s == 2) {
                        exam.viewMarks();             // views only
                    }
                    else if (s == 3) {
                        break;
                    }
                    else {
                        cout << "Invalid choice\n";
                    }
                }
            }

            /* ================= TEACHER MENU ================= */
            else if (role == "teacher") {
                int t;
                while (true) {
                    cout << "\n===== TEACHER MENU =====\n";
                    cout << "1. Mark Attendance\n";
                    cout << "2. View Attendance\n";
                    cout << "3. Enter Marks\n";
                    cout << "4. View Marks\n";
                    cout << "5. Logout\n";
                    cin >> t;

                    if (t == 1) attendance.markAttendence();
                    else if (t == 2) attendance.viewAttendence();
                    else if (t == 3) exam.enterMarks();
                    else if (t == 4) exam.viewMarks();
                    else if (t == 5) break;
                    else cout << "Invalid choice\n";
                }
            }

            /* ================= ADMIN MENU ================= */
            else if (role == "admin") {
                int a;
                while (true) {
                    cout << "\n===== ADMIN MENU =====\n";
                    cout << "1. Course Management\n";
                    cout << "2. Attendance\n";
                    cout << "3. Marks\n";
                    cout << "4. Library\n";
                    cout << "5. Logout\n";
                    cin >> a;

                    if (a == 1) {
                        int c;
                        while (true) {
                            cout << "\n--- COURSE MENU ---\n";
                            cout << "1. Add Course\n";
                            cout << "2. Update Course\n";
                            cout << "3. Delete Course\n";
                            cout << "4. View Courses\n";
                            cout << "5. Back\n";
                            cin >> c;

                            if (c == 1) course.addCourse();
                            else if (c == 2) course.updateCourse();
                            else if (c == 3) course.deleteCourse();
                            else if (c == 4) course.printAllCourses();
                            else if (c == 5) break;
                        }
                    }
                    else if (a == 2) {
                        attendance.markAttendence();
                    }
                    else if (a == 3) {
                        exam.enterMarks();
                    }
                    else if (a == 4) {
                        int l;
                        while (true) {
                            cout << "\n--- LIBRARY MENU ---\n";
                            cout << "1. Add Book\n";
                            cout << "2. Issue Book\n";
                            cout << "3. Return Book\n";
                            cout << "4. View Books\n";
                            cout << "5. Back\n";
                            cin >> l;

                            if (l == 1) library.addBook();
                            else if (l == 2) library.issueBook();
                            else if (l == 3) library.returnBook();
                            else if (l == 4) library.viewBooks();
                            else if (l == 5) break;
                        }
                    }
                    else if (a == 5) break;
                }
            }
        }
        else if (choice == 3) {
            log.log("SYSTEM EXIT");
            log.closelog();
            break;
        }
        else {
            cout << "Invalid option\n";
        }
    }

    return 0;
}
