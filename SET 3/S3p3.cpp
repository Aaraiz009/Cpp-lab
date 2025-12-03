#include <iostream>
using namespace std;

class Rectangle{
    float length, breadth;
    public:
    void getData(float l, float b){
        length = l;
        breadth = b;
    }

    int area(){
        return ( length * breadth);
    }
};

int main() {
    Rectangle r1;
    r1.getData(10.2, 20.3);
    float ar = r1.area();
    cout << "Area is : " << ar << endl;
    return 0;
}
