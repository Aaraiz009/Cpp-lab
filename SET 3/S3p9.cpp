#include <iostream>
using namespace std;

class Time {
    int hours;
    int minutes;

public:
    Time(int h = 0, int m = 0) {
        hours = h;
        minutes = m;
    }

    Time addTime(Time t) {
        Time temp;
        temp.minutes = minutes + t.minutes;
        temp.hours = hours + t.hours;

        if (temp.minutes >= 60) {
            temp.hours += temp.minutes / 60;
            temp.minutes = temp.minutes % 60;
        }

        return temp;
    }

    void display() {
        cout << hours << " hours " << minutes << " minutes" << endl;
    }
};

int main() {
    Time t1(2, 45);
    Time t2(1, 30);

    Time result = t1.addTime(t2);

    cout << "First Time: ";
    t1.display();

    cout << "Second Time: ";
    t2.display();

    cout << "Sum of Times: ";
    result.display();

    return 0;
}
