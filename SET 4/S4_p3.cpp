#include <iostream>
using namespace std;

class Circle {
    public:
    float radius;
    Circle(){
        radius = 10;
    }
};

void incRadius( Circle *r){
    cout << "In function" << endl;
    r->radius = r->radius + 5;
    cout << "radius" << r->radius << endl;
    
}

int main() {
    Circle r1;
    Circle *p = &r1;
    cout << "In main before calling incRadius" << endl;
    cout << "radius" << r1.radius /*or p->radius*/ << endl;
    
    incRadius(p);
    cout << "In main after calling incRadius" << endl;
    cout << "radius" << r1.radius /*or p->radius*/ << endl;
    return 0;
}