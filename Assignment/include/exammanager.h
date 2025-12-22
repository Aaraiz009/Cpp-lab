#ifndef EXAMMANAGER_H
#define EXAMMANAGER_H

#include <vector>
#include <fstream>
#include <iostream>
#include "exam.h"
#include "logger.h"

using namespace std;

class ExamManager {
    vector<Exam> exams;
    Logger &log;

public:
    ExamManager(Logger &l);

    void loadMarks();
    void saveMarks();
    void enterMarks();
    void viewMarks();
};

#endif
