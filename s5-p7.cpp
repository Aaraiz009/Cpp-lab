// 7. Car Dealership Records
// Concepts: Array of objects, aggregation, string matching
// Problem:
// Make a class Car with data members: model, company, price.
// • Store n car objects.
// • Display all cars of a particular company.
// • Find and display the most expensive car.

#include <iostream>
using namespace std;

class Car
{
public:
    string model;
    string company;
    float price;

    void getData()
    {
        cin >> model >> company >> price;
    }
};

int main()
{
    int n;
    cin >> n;

    Car cars[n];

    for (int i = 0; i < n; i++)
    {
        cars[i].getData();
    }

    string searchCompany;
    cin >> searchCompany;

    int maxIndex = 0;

    for (int i = 0; i < n; i++)
    {
        if (cars[i].company == searchCompany)
        {
            cout << cars[i].model << endl;
        }
        if (cars[i].price > cars[maxIndex].price)
        {
            maxIndex = i;
        }
    }

    cout << "Most Expensive Car: " << cars[maxIndex].model << endl;
    return 0;
}
