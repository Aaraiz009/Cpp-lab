#include <iostream>
using namespace std;

class Time {
public:
    int hours, minutes;
    Time() {
        hours = 0;
        minutes = 0;
    }
    void addTime(Time &other) {
        minutes += other.minutes;
        hours += other.hours + minutes / 60;
        minutes %= 60;
    }
};

int main() {
    Time t1, t2;
    t1.hours = 1;
    t1.minutes = 30;
    t2.hours = 2;
    t2.minutes = 45;

    cout << "Time 1: " << t1.hours << "h " << t1.minutes << "m" << endl;
    cout << "Time 2: " << t2.hours << "h " << t2.minutes << "m" << endl;

    t1.addTime(t2);
    cout << "After adding: " << t1.hours << "h " << t1.minutes << "m" << endl;
    return 0;
}
