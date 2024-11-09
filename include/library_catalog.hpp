#ifndef LIBRARYCATALOG_HPP
#define LIBRARYCATALOG_HPP

#include <string>
#include <vector>

#include "Book.hpp"

class LibraryCatalog
{
   private:
    std::vector<Book> books;

   public:
    void addBook(const std::string& title, const std::string& author, int year);
    void searchByAuthor(const std::string& author) const;
    void displayCatalog() const;
};

#endif
