
#include "../include/AuthManager.h"

AuthManager::AuthManager(Logger &log1) : log(log1) {} // store log1 in log

string currentUser, currentRole;
string hashstring(const string &passw)
{
    hash<string> hasher;
    size_t password = hasher(passw);
    return to_string(password);
}
void AuthManager::registerUser()
{

    string username;
    string passw;
    string role;

    cout << "\n --- User Registration ---\n";

    cout << "Enter your username :  " << endl;
    cin >> username;

    cout << "Enter your password :" << endl;
    cin >> passw;
    cout << "Confirm your password :" << endl;
    cin >> passw;
    cout << "Enter your role :" << endl;
    cin >> role;

    fstream file;
    file.open("data/users.txt", ios::app);
    file << username << " ";
    file << hashstring(passw) << " ";
    file << role << endl;

    file.close();

    cout << "User Registered Successfully !";

    log.log("Succedsfully Registered  :" + username);
}

bool AuthManager::loginUser()
{
    string username;
    string passw;

    cout << "\n --- Login ---\n";
    cout << "Enter your username :" << endl;
    cin >> username;
    cout << "Enter your password :" << endl;
    cin >> passw;

    fstream file;
    file.open("data/users.txt", ios::in);

    string u, p, r;

    while (file >> u >> p >> r)
    {
        if (u == username && p == hashstring(passw))
        {
            currentUser = u;
            currentRole = r; // role read from file
            log.log("Login success: " + u + " (" + r + ")");
            return true;
        }
    }
    log.log("Login Failed ! - " + username);
    cout << "Login Failed ! - " + username << endl;
    return false;
}
string AuthManager::getRole()
{
    return currentRole;
}

string AuthManager::getUser()
{
    return currentUser;
}
