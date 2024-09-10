#ifndef LIBRARY_H
#define LIBRARY_H

#include "book.h"
#include <vector>

struct Library {
    std::vector<Book> books;
};

// Функции для работы с библиотекой
void addBook(Library &library, const Book &book);
void removeBook(Library &library, const std::string &title);
Book* findBookByTitle(Library &library, const std::string &title);
void listAllBooks(const Library &library);

#endif