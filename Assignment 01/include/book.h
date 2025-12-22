#ifndef BOOK_H
#define BOOK_H

#include <string>
#include <iostream>
using namespace std;

class Book {
public:
    string id;        // Book ID like B101
    string title;
    string author;
    bool issued;      // true = issued, false = available

    Book() {}

    Book(string i, string t, string a, bool iss=false)
        : id(i), title(t), author(a), issued(iss) {}

    // Operator overloading for file writing (<<)
    friend ostream& operator<<(ostream &out, const Book &b) {
        out << b.id << " " << b.title << " " << b.author << " " << b.issued;
        return out;
    }

    // Operator overloading for reading (>>)
    friend istream& operator>>(istream &in, Book &b) {
        in >> b.id >> b.title >> b.author >> b.issued;
        return in;
    }
};

#endif
