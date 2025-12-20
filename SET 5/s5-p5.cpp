// 5. Inventory Stock Update
// Concepts: Array of objects, operator overloading
// Problem:
// Define a class Item with members: code, name, and quantity.
// • Overload the + operator to add quantities of items with the same code.
// • Create an array of items.
// • Merge stock from two inventories into a third array.

#include <iostream>
using namespace std;

class Item
{
public:
    int code;
    string name;
    int quantity;

    Item operator+(const Item &other)
    {
        Item result;
        result.code = code;
        result.name = name;
        result.quantity = quantity + other.quantity;
        return result;
    }
};

int main()
{
    Item item1, item2, mergedItem;

    cin >> item1.code >> item1.name >> item1.quantity;
    cin >> item2.code >> item2.name >> item2.quantity;

    if (item1.code == item2.code)
    {
        mergedItem = item1 + item2;
        cout << mergedItem.code << " "
             << mergedItem.name << " "
             << mergedItem.quantity << endl;
    }

    return 0;
}
