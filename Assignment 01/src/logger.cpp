#include "../include/logger.h"
#include <ctime>        //for adding time


Logger::Logger(){};

Logger::~Logger(){              //makes sure the file is closed
    if(file.is_open()){
        file.close();
    }
}

//opens the log file
void Logger::openlog(){

    file.open("logs/scms.logs",ios::app);

    if(!file.is_open()){
        cout<<"Failed to open the log file !"<<endl;
    }
}

string Logger::getTime(){
    time_t now = time(0);       //gives the current time
    string t = ctime(&now);     //converts to string
    t.pop_back();               //removes strings last character (extra newline)
    return "[" + t + "]";
}

void Logger::log(string message){
    if (file.is_open()){
        file<<getTime()<< " " <<message << endl;
    }

    //shows on screen
    cout<<getTime()<< " " <<message << endl;

}

void Logger::closelog(){
    if(file.is_open()){
        file.close();
    }
}