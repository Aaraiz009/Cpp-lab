// 2
//  ️. Constructor and Inheritance 
// Topic: Constructor Calling Order 
// Problem: 
// Create two classes Base and Derived. Both have constructors and destructors that display 
// messages when called. 
// Create an object of Derived and observe the order of constructor/destructor calls. 
// Learning Outcome: Understanding of constructor–destructor call hierarchy in inheritance. 

#include <iostream>
using namespace std;
class Base{
public:
    Base(){
        cout << "Base class constructor\n"; //1st
    }
    ~Base(){
        cout << "Base class destructor\n"; // 4th
    }
};
class Derived: public Base{
public:
    Derived(){
        cout << "Derived class constructor\n"; //2nd
    }
    ~Derived(){
        cout << "Derived class destructor\n"; // 3rd
    }
};

int main() {
    Derived d1;
    return 0;
}