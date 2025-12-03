#include <iostream>
using namespace std;

class Rectangle {
    public:
    float length, breadth;
    Rectangle(){
        length = 10;
        breadth = 20;
    }
};

void scale( Rectangle &r){
    cout << "In function" << endl;
    r.length = r.length * 2;
    r.breadth = r.breadth * 2;
    cout << "Length" << r.length << endl;
    cout << "Breadth" << r.breadth << endl;
}

int main() {
    Rectangle r1;
    cout << "In main before calling scale" << endl;
    cout << "Length" << r1.length << endl;
    cout << "Breadth" << r1.breadth << endl;
    
    scale( r1);
    cout << "In main after calling scale" << endl;
    cout << "Length" << r1.length << endl;
    cout << "Breadth" << r1.breadth << endl;
    return 0;
}