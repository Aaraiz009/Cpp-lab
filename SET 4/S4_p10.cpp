#include <iostream>
#include <string>
using namespace std;

class Employee {
public:
    string name;
    float salary;
    Employee() {
        name = "Default";
        salary = 0.0;
    }
    void updateSalary(float amount) {
        salary += amount;
    }
};

void swap(Employee *e1, Employee *e2) {
    Employee temp = *e1;
    *e1 = *e2;
    *e2 = temp;
}

int main() {
    Employee e1, e2;
    e1.name = "Alice";
    e1.salary = 50000.0;
    e2.name = "Bob";
    e2.salary = 60000.0;

    cout << "Before update and swap:" << endl;
    cout << e1.name << " salary: " << e1.salary << endl;
    cout << e2.name << " salary: " << e2.salary << endl;

    e1.updateSalary(5000.0);
    cout << "After updating Alice's salary:" << endl;
    cout << e1.name << " salary: " << e1.salary << endl;

    swap(&e1, &e2); 
    cout << "After swapping:" << endl;
    cout << e1.name << " salary: " << e1.salary << endl;
    cout << e2.name << " salary: " << e2.salary << endl;

    return 0;
}

