#include <iostream>
using namespace std;

class Complex {
    float real;
    float imag;

public:
    
    Complex(float r = 0, float i = 0) {
        real = r;
        imag = i;
    }

    Complex add(Complex c) {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }

    
    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(3.5, 2.5);
    Complex c2(1.6, 4.2);

    Complex result = c1.add(c2);

    cout << "First Complex Number: ";
    c1.display();

    cout << "Second Complex Number: ";
    c2.display();

    cout << "Sum of Complex Numbers: ";
    result.display();

    return 0;
}
