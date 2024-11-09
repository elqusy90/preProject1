#include <iostream>

#include "library_catalog.hpp"

int main()
{
    LibraryCatalog catalog;
    int choice;
    std::string title, author;
    int year;

    do
    {
        std::cout << "\nLibrary Catalog Menu\n";
        std::cout << "1. Add Book\n";
        std::cout << "2. Search by Author\n";
        std::cout << "3. Display Catalog\n";
        std::cout << "4. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice)
        {
            case 1:
                std::cout << "Enter book title: ";
                std::cin.ignore();
                std::getline(std::cin, title);
                std::cout << "Enter author name: ";
                std::getline(std::cin, author);
                std::cout << "Enter publication year: ";
                std::cin >> year;
                catalog.addBook(title, author, year);
                std::cout << "Book added successfully!" << std::endl;
                break;

            case 2:
                std::cout << "Enter author name to search: ";
                std::cin.ignore();
                std::getline(std::cin, author);
                catalog.searchByAuthor(author);
                break;

            case 3:
                catalog.displayCatalog();
                break;

            case 4:
                std::cout << "Exiting the catalog system. Goodbye!" << std::endl;
                break;

            default:
                std::cout << "Invalid choice. Please try again." << std::endl;
                break;
        }
    } while (choice != 4);

    return 0;
}
