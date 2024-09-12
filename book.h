#ifndef BOOK_H
#define BOOK_H

#include <string>

struct Book {
    std::string title;
    std::string author;
    int publicationYear;
    std::string genre;
};

void printBook(const Book &book);

#endif
