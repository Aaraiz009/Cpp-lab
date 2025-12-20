// 9. Operator Overloading with Inheritance (Moderate)
// Topic: Inheritance + Operator Overloading
// Problem:
// Create a class Vector2D with x and y coordinates and overload the + operator.
// Derive a class Vector3D that adds z coordinate and overloads the + operator as well.
// Show how the derived operator reuses base functionality.
// Learning Outcome: Combining operator overloading with inheritance and
// reusing base class code.

#include <iostream>
using namespace std;

class Vector2D
{
protected:
    int x, y;

public:
    Vector2D(int a = 0, int b = 0)
    {
        x = a;
        y = b;
    }

    Vector2D operator+(const Vector2D &v) const
    {
        return Vector2D(x + v.x, y + v.y);
    }

    int getX() const { return x; }
    int getY() const { return y; }
};

class Vector3D : public Vector2D
{
    int z;

public:
    Vector3D(int a = 0, int b = 0, int c = 0) : Vector2D(a, b)
    {
        z = c;
    }

    Vector3D operator+(const Vector3D &v) const
    {
        Vector2D baseSum = Vector2D::operator+(v);
        return Vector3D(baseSum.getX(), baseSum.getY(), z + v.z);
    }

    void display() const
    {
        cout << "x: " << x << ", y: " << y << ", z: " << z << endl;
    }
};

int main()
{
    Vector3D v1(1, 2, 3);
    Vector3D v2(4, 5, 6);

    Vector3D v3 = v1 + v2;
    v3.display();

    return 0;
}
