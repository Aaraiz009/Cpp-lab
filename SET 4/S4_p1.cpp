#include <iostream>
using namespace std;

class Point {
    public:
    int x,y;
    Point(){
        x = 0;
        y = 0;
    }
};

void Display(Point p){
    cout << "In display Function" << endl;
    
    p.x = p.x + 1;
    p.y = p.y + 1;
    cout << p.x << " " << p.y << endl;
}

int main() {
    
    Point p1;
    Display(p1);
    
    cout << "In main" << endl;
    cout << p1.x << " " << p1.y << endl;
    return 0;
}