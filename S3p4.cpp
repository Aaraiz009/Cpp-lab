#include <iostream>
using namespace std;

class Employee {
    int id;
    float salary;
    public:
    Employee(int i, float s){
        id = i;
        salary = s;
    }

    void putData(){
        cout << "Employee id is: " << id << "\nEmployee salary is: " << salary << endl;
    }
};
int main() {
    Employee e1(01, 25000);
    e1.putData();
    Employee e2(02, 35000);
    e2.putData();
    return 0;
}
