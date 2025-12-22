#ifndef LOGGER_H
#define LOGGER_H

#include <iostream>
#include <fstream>
using namespace std;

class Logger{
    ofstream file;   //this will write to loger file
    string getTime();       //for time 

    public:

    Logger();       //constructor called

    ~Logger();      //destructor called

    void openlog();     //this opens the log file

    void log(string message);     //writes the message

    void closelog();       //closes the log file
};
#endif 