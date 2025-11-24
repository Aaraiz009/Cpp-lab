#include <iostream>
using namespace std;

class Circle{
    float radius;
    public:
    Circle(){
        radius = 1;
    }
    Circle(float r){
        radius = r;
    }
    void putData(){
        cout << "Area of Circle is :" << (3.14 * radius * radius) << endl;
    }
};
int main() {
    float r;
    Circle c1;
    c1.putData();
    cout << "Enter radius: " << endl;
    cin >> r;
    Circle c2(r);
    c2.putData();
    return 0;
}
