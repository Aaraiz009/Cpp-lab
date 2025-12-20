// 9. Complex Number Operations using Array of Objects
// Concepts: Array of objects, operator overloading, aggregation
// Problem:
// Create a Complex class with data members: real and imag.
// • Overload the + and * operators.
// • Compute the sum and product of all complex numbers in the array.

#include <iostream>
using namespace std;

class Complex
{
public:
    int real;
    int imag;

    Complex operator+(const Complex &c)
    {
        return {real + c.real, imag + c.imag};
    }

    Complex operator*(const Complex &c)
    {
        return {
            real * c.real - imag * c.imag,
            real * c.imag + imag * c.real};
    }
};

int main()
{
    int n;
    cin >> n;

    Complex arr[n];
    Complex sum = {0, 0};
    Complex product = {1, 0};

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].real >> arr[i].imag;
    }

    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
        product = product * arr[i];
    }

    cout << sum.real << " " << sum.imag << endl;
    cout << product.real << " " << product.imag << endl;

    return 0;
}
