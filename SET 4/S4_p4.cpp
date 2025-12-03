#include <iostream>
using namespace std;

class Complex {
    public:
    int real, imaginary;
    Complex(){
        real = 10;
        imaginary = 20;
    }
};

Complex& add( Complex c1, Complex c2){
    cout << "In function" << endl;
    Complex result;
    result.real = c1.real + c2.real;
    result.imaginary = c1.imaginary + c2.imaginary;
    return result;
}

int main() {
    Complex r1,r2;
    cout << "In main before calling add" << endl;
    cout << "real" << r1.real << endl;
    cout << "imaginary" << r1.imaginary << endl;

    cout << "real" << r2.real << endl;
    cout << "imaginary" << r2.imaginary << endl;
    
    Complex res = add(r1, r2);
    cout << "In main after calling add" << endl;
    cout << "real" << res.real << endl;
    cout << "imaginary" << res.imaginary << endl;

    return 0;
}