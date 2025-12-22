#ifndef AUTHMANAGER_H
#define AUTHMANAGER_H
#include <iostream>
#include <fstream>
#include "../include/user.h"
#include "../include/logger.h"  //using logger to store login/register activities

using namespace std;

class AuthManager{

    Logger &log;

    public:

    AuthManager(Logger &log);

    void registerUser();

    bool loginUser();

    string getRole();
    
    string getUser();

    
};


#endif