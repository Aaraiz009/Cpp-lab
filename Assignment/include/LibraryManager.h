#ifndef LIBRARY_MANAGER_H
#define LIBRARY_MANAGER_H

#include <vector>
#include "book.h"
#include "logger.h"

class LibraryManager {
private:
    vector<Book> books;
    Logger &log;

public:
    LibraryManager(Logger &l);

    void loadBooks();
    void saveBooks();
    void addBook();
    void issueBook();
    void returnBook();
    void viewBooks();
};

#endif
