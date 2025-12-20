// 6. Function Overriding with virtual Keyword 
// Topic: Polymorphism via Inheritance 
// Problem: 
// Create a base class Animal with a speak() function. 
// Derive classes Dog and Cat that override this function. 
// Use a base class pointer to call the functions and observe behavior with and without 
// virtual. 
// Learning Outcome: Role of virtual functions in runtime polymorphism. 

#include <iostream>
using namespace std;

class Animal {
public:
    // virtual remove krke agr ptr se call kiya toh Base class wala speak() call hoga
    virtual void speak() {
        cout << "Animal speaks..." << endl;
    }
};

class Dog : public Animal {
public:
    void speak() {
        cout << "Dog says: Bow Bow!" << endl;
    }
};

class Cat : public Animal {
public:
    void speak() {
        cout << "Cat says: Meow Meow!" << endl;
    }
};

int main() {
    Animal* ptr; 

    Dog d;
    Cat c;
    d.speak();
    c.speak();

    ptr = &d;
    ptr->speak(); // Calls Dog speak() 

    ptr = &c;
    ptr->speak(); // Calls Cat speak()

    return 0;
}
