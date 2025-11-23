#include <iostream>
using namespace std;

class Book {
    
    string title, author;
    float price;

    public:

    void getData(string ti, string au, float pr){
        title = ti;
        author = au;
        price = pr;
    }
    void putData(){
        cout << "Title: " << title << "\nAuthor: " << author << "\nPrice: " << price;
    }
};

int main() {
    string title, author;
    float price;
    cout << "Enter title, author and price\n";
    cin>> title >> author >> price;
    Book b1;
    b1.getData(title, author, price);
    b1.putData();
    return 0;
}
