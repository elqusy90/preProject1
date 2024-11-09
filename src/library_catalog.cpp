#include "library_catalog.hpp"

#include <iostream>


void LibraryCatalog::addBook(const std::string& title, const std::string& author, int year)
{
    books.emplace_back(title, author, year);
}

void LibraryCatalog::searchByAuthor(const std::string& author) const
{
    bool found = false;
    for (const auto& book : books)
    {
        if (book.getAuthor() == author)
        {
            book.displayInfo();
            found = true;
        }
    }
    if (!found)
    {
        std::cout << "No books found by author: " << author << std::endl;
    }
}

void LibraryCatalog::displayCatalog() const
{
    if (books.empty())
    {
        std::cout << "The catalog is empty." << std::endl;
    }
    else
    {
        for (const auto& book : books)
        {
            book.displayInfo();
        }
    }
}
