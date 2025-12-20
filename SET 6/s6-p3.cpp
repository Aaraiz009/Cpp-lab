// 3
//  ️. Using protected Members 
// Topic: Access specifiers 
// Problem: 
// Create a class Employee with protected data members id and salary. 
// Derive a class Manager that sets and displays these details through a member function. 
// Learning Outcome: Usage of protected members and inheritance for controlled data 
// access. 

#include <iostream>
using namespace std;
class Employee{
protected:
    int id;
    float salary;
};
class Manager : public Employee{
public:
    void setData(){
        cout << "Enter Employee id and salaray\n";
        cin >> id >> salary;
    }
    void displayData(){
        cout << " Employee id: " << id << "\nEmployee salaray: " << salary;
    }
};

int main() {
    Manager m1;
    m1.setData();
    m1.displayData();
    
    return 0;
}