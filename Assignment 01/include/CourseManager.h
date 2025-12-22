#ifndef COURSEMANAGER_H
#define COURSEMANAGER_H

#include "Course.h"
#include "logger.h"
#include <vector>

class CourseManager {
private:
    vector<Course> courses;
    Logger &log;

public:
    CourseManager(Logger &log);

    void loadCourses();
    void saveCourses();

    void addCourse();
    void updateCourse();
    void deleteCourse();

    void enrollStudent();
    void dropStudent();

    void printAllCourses();
};

#endif
