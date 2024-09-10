#ifndef BOOK_H
#define BOOK_H

#include <string>

struct Book {
    std::string title;
    std::string author;
    int publicationYear;
    std::string genre;
};

// Функции для работы с книгами
void printBook(const Book &book);

#endif