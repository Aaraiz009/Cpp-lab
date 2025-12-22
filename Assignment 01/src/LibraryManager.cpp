#include "../include/LibraryManager.h"
#include <fstream>
#include <iostream>

LibraryManager::LibraryManager(Logger &l) : log(l) {}

void LibraryManager::loadBooks() {
    books.clear();
    ifstream file("data/books.txt");

    if (!file) return;

    Book b;
    while (file >> b) {
        books.push_back(b);
    }
    file.close();
}

void LibraryManager::saveBooks() {
    ofstream file("data/books.txt");

    for (auto &b : books)
        file << b << endl;

    file.close();
}
void LibraryManager::addBook() {
    string id, title, author;
    cout << "Enter Book ID: ";
    cin >> id;
    cout << "Enter Title: ";
    cin >> title;
    cout << "Enter Author: ";
    cin >> author;

    books.push_back(Book(id, title, author, false));
    saveBooks();

    log.log("Book added: " + id);
}
void LibraryManager::issueBook() {
    string id;
    cout << "Enter Book ID to issue: ";
    cin >> id;

    loadBooks();

    for (auto &b : books) {
        if (b.id == id) {
            if (b.issued) {
                cout << "Book already issued!\n";
                return;
            }
            b.issued = true;
            saveBooks();
            log.log("Book issued: " + id);
            cout << "Book issued successfully.\n";
            return;
        }
    }

    cout << "Book not found!\n";
}
void LibraryManager::returnBook() {
    string id;
    cout << "Enter Book ID to return: ";
    cin >> id;

    loadBooks();

    for (auto &b : books) {
        if (b.id == id) {
            if (!b.issued) {
                cout << "Book is not issued!\n";
                return;
            }
            b.issued = false;
            saveBooks();
            log.log("Book returned: " + id);
            cout << "Return successful.\n";
            return;
        }
    }

    cout << "Book not found!\n";
}
void LibraryManager::viewBooks() {
    loadBooks();

    cout << "\n======= BOOK LIST =======\n";
    for (auto &b : books) {
        cout << b.id << " | " << b.title << " | " << b.author
             << " | " << (b.issued ? "Issued" : "Available") << endl;
    }
}
