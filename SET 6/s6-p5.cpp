#include <iostream>
using namespace std;

class Shape {
public:
    void area() {
        cout << "Calculating area..." << endl;
    }
};

class Rectangle : public Shape {
private:
    float length, breadth;

public:
    Rectangle(float l, float b) {
        length = l;
        breadth = b;
    }

    // Overriding area()
    void area() {
        cout << "Area of Rectangle = " << length * breadth << endl;
    }
};

class Circle : public Shape {
private:
    float radius;

public:
    Circle(float r) {
        radius = r;
    }

    void area() {
        cout << "Area of Circle = " << 3.14 * radius * radius << endl;
    }
};

int main() {
    Shape s;
    Rectangle r(5, 4);
    Circle c(3);
    
    s.area();
    r.area();  
    c.area();  
    return 0;
}
