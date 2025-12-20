// Problem 1 — printTwo (Function template) 
// Objective: Write a function template printTwo that prints two values (of the same 
// type) separated by a space. 
// Input: First token: type (int/double/string), then two values. 
// Output: The two values separated by a space. 
// Example: 
// Input: int 5 7 → Output: 5 7 

#include <iostream>
using namespace std;
template<class t>
void printTwo(t a, t b){
    cout << a << " " << b << "\n";
}

int main() {
    printTwo(20,40);
    printTwo('a','b');
    printTwo(2.10,40.9);
    return 0;
}