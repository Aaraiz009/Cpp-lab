// 6. Flight Reservation System
// Concepts: Dynamic array of objects, object filtering
// Problem:
// Create a class Flight with data members: flightNo, source, destination, seatsAvailable.
// • Allocate flights dynamically.
// • Display all flights going to a particular destination.
// • Update seat count when a booking is made.

#include <iostream>
using namespace std;

class Flight
{
public:
    int flightNo;
    string source;
    string destination;
    int seatsAvailable;

    void getData()
    {
        cin >> flightNo >> source >> destination >> seatsAvailable;
    }
};

int main()
{
    int n;
    cin >> n;

    Flight *flights = new Flight[n];

    for (int i = 0; i < n; i++)
    {
        flights[i].getData();
    }

    string dest;
    cin >> dest;

    for (int i = 0; i < n; i++)
    {
        if (flights[i].destination == dest)
        {
            cout << flights[i].flightNo << endl;
        }
    }

    delete[] flights;
    return 0;
}
