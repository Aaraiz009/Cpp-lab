// Problem 5 — StringBox (Class template with string only) 
// Objective: Implement Box<T> but test with T = string. Class stores a value, set and 
// get. Read one string, store it, then print from get(). 
// Input: one word (no spaces). 
// Output: the same word. 
// Example: 
// Input: Hello → Output: Hello 

#include <iostream>
using namespace std;
template< class t>
class StringBox
{
private:
    t value;
public:
    void setData(t str){
        value = str;
    }
    void getData(){
        cout << value << endl;
    }
};


int main() {
    StringBox<string>s1;
    s1.setData("Hello");
    s1.getData();
    
    return 0;
}