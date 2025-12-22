#ifndef ATTENDENCEMANAGER_H
#define ATTENDENCEMANAGER_H
#include<vector>
#include "attendence.h"
#include "logger.h"

class AttendenceManager{
    vector<Attendence> records;
    Logger &log;
    
    public:
    AttendenceManager(Logger &log);

    void saveAttendence();
    void loadAttendence();
    void markAttendence();
    void viewAttendence();
};
#endif