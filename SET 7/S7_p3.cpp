// Problem 3 — MinMaxPair (Simple class template) 
// Objective: Create a class template MinMax<T> that stores two values (minVal, maxVal) 
// and has a constructor taking two T values and a print() method to print them as min 
// max. 
// Input: type and two values. 
// Output: min max (use the given values as they are — no need to compute min/max). 
// Example: 
// Input: double 2.5 7.1 → Output: 2.5 7.1 

#include <iostream>
using namespace std;
template<class t>
class MinMaxPair
{
private:
    t minVal;
    t maxVal;
public:
    MinMaxPair(t a, t b){
        minVal = a;
        maxVal = b;
    }
    void print(){
        cout << minVal << " "<< maxVal << endl;
    }
};

int main() {
    MinMaxPair<int> m1(20, 40);
    m1.print();
    MinMaxPair<float> m2(20.3, 4.20);
    m2.print();
    
    
    return 0;
}