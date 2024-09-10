#include <iostream>
#include <string>
#include "book.h"
#include "library.h"
#include "writer.h"

void showMenu() {
    std::cout << "Library Menu:\n";
    std::cout << "1. Add Book\n";
    std::cout << "2. Remove Book\n";
    std::cout << "3. Find Book by Title\n";
    std::cout << "4. List All Books\n";
    std::cout << "5. Exit\n";
    std::cout << "Choose an option: ";
}

int main() {
    Library library;
    int choice;
    std::string title, author, genre;
    int year;

    do {
        showMenu();
        std::cin >> choice;

        switch (choice) {
            case 1: {
                while (title.empty())
                {
                    std::cout << "Enter title: ";
                    std::cin.ignore();
                    std::getline(std::cin, title);
                }
                while (author.empty())
                {
                    std::cout << "Enter author: ";
                    std::cin.ignore();
                    std::getline(std::cin, author);
                }
                while (year < 0)
                {
                    std::cout << "Enter year: ";
                    std::cin.ignore();
                    std::cin >> year;                   
                }
                while (genre.empty())
                {
                    std::cout << "Enter genre: ";
                    std::cin.ignore();
                    std::getline(std::cin, genre);
                }
                
                
                Book book{title, author, year, genre};
                addBook(library, book);
                std::cout << "Book added.\n";
                break;
            }
            case 2: {
                std::cout << "Enter title of the book to remove: ";
                std::cin.ignore();
                std::getline(std::cin, title);
                removeBook(library, title);
                std::cout << "Book removed.\n";
                break;
            }
            case 3: {
                std::cout << "Enter title: ";
                std::cin.ignore();
                std::getline(std::cin, title);
                Book* book = findBookByTitle(library, title);
                if (book) {
                    printBook(*book);
                } else {
                    std::cout << "Book not found.\n";
                }
                break;
            }
            case 4: {
                listAllBooks(library);
                break;
            }
            case 5: {
                std::cout << "Exiting...\n";
                break;
            }
            default: {
                std::cout << "Invalid option. Please try again.\n";
                break;
            }
        }
    } while (choice != 5);

    return 0;
}