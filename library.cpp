#include "library.h"
#include <algorithm>
#include <iostream>

void addBook(Library &library, const Book &book) {
    library.books.push_back(book);
}

void removeBook(Library &library, const std::string &title) {
    library.books.erase(std::remove_if(library.books.begin(), library.books.end(),
                                       [&title](const Book &book) {
                                           return book.title == title;
                                       }), library.books.end());
}

Book* findBookByTitle(Library &library, const std::string &title) {
    for (Book &book : library.books) {
        if (book.title == title) {
            return &book;
        }
    }
    return nullptr;
}

void listAllBooks(const Library &library) {
    for (const Book &book : library.books) {
        printBook(book);
    }
}