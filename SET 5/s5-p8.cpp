// 8. Online Shopping Cart
// Concepts: Array of objects, composition, discount logic
// Problem:
// Define a class Product with attributes: id, name, price, discount.
// • Create an array of objects representing cart items.
// • Compute the total amount payable after applying discounts.

#include <iostream>
using namespace std;

class Product
{
public:
    int id;
    string name;
    float price;
    float discount;

    float getFinalPrice()
    {
        return price - (price * discount / 100);
    }
};

int main()
{
    int n;
    cin >> n;

    Product cart[n];
    float totalAmount = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> cart[i].id >> cart[i].name >> cart[i].price >> cart[i].discount;
        totalAmount += cart[i].getFinalPrice();
    }

    cout << totalAmount << endl;
    return 0;
}
