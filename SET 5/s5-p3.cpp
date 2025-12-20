// 3. Library Book Management
// Concepts: Array of objects, searching, string handling
// Problem:
// Create a class Book with members: bookID, title, author, and price.
// • Read details for n books into an array.
// • Implement a function to search for a book by author name.
// • Display all books written by that author.

#include <iostream>
using namespace std;

class Book
{
public:
    int bookID;
    string title;
    string author;
    float price;

    void getData()
    {
        cin >> bookID >> title >> author >> price;
    }

    void showData()
    {
        cout << bookID << " " << title << " " << author << " " << price << endl;
    }
};

int main()
{
    int n;
    cin >> n;

    Book books[n];

    for (int i = 0; i < n; i++)
    {
        books[i].getData();
    }

    string searchAuthor;
    cin >> searchAuthor;

    for (int i = 0; i < n; i++)
    {
        if (books[i].author == searchAuthor)
        {
            books[i].showData();
        }
    }

    return 0;
}
