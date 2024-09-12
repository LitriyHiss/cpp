#include "book.h"
#include <iostream>

void printBook(const Book &book) {
    std::cout << "Title: " << book.title << "\n"
              << "Author: " << book.author << "\n"
              << "Year: " << book.publicationYear << "\n"
              << "Genre: " << book.genre << "\n";
}