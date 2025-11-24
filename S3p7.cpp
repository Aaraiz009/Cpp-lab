#include <iostream>
using namespace std;

class Car{
    string brand;
    float price;

    public:
    Car() {}

    void getData(string b, float p){
        brand = b;
        price = p;
    }
    Car(Car &obj){
        brand = obj.brand;
        price = obj.price;
    }
    void putData() {
        cout << "Brand: "<<brand << "\nPrice: " << price << endl;
    }
};
int main() {
    Car c1;
    c1.getData("Toyota", 20000);
    c1.putData();
    Car c2 = c1;
    c2.putData();
    return 0;
}
