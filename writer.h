#ifndef WRITER_H
#define WRITER_H

#include <string>
#include <vector>
#include "book.h"

struct Writer {
    std::string firstName;
    std::string lastName;
    std::string birthDate;
    std::vector<Book> writtenBooks;
    int age;
};

// Функции для работы с писателем
void changeFirstName(Writer &writer, const std::string &newFirstName);
void changeLastName(Writer &writer, const std::string &newLastName);
void writeBook(Writer &writer, const Book &book);

#endif