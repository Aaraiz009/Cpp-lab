#include <iostream>
using namespace std;

class Box {
public:
    float length, width, height;
    Box() {
        length = 1.0;
        width = 1.0;
        height = 1.0;
    }
    bool compare(Box other) {
        float vol1 = length * width * height;
        float vol2 = other.length * other.width * other.height;
        return vol1 > vol2;
    }
};

int main() {
    Box b1, b2;
    b1.length = 2.0;
    b1.width = 3.0;
    b1.height = 4.0;
    b2.length = 1.0;
    b2.width = 2.0;
    b2.height = 3.0;

    cout << "Box 1 volume: " << b1.length * b1.width * b1.height << endl;
    cout << "Box 2 volume: " << b2.length * b2.width * b2.height << endl;
    if (b1.compare(b2)) {
        cout << "Box 1 has larger volume." << endl;
    } else {
        cout << "Box 2 has larger or equal volume." << endl;
    }
    return 0;
}
