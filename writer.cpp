#include "writer.h"

void changeFirstName(Writer &writer, const std::string &newFirstName) {
    writer.firstName = newFirstName;
}

void changeLastName(Writer &writer, const std::string &newLastName) {
    writer.lastName = newLastName;
}

void writeBook(Writer &writer, const Book &book) {
    writer.writtenBooks.push_back(book);
}