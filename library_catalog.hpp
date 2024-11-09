#if not defined(__LIBRARY_CATALOG_HPP)
#define __LIBRARY_CATALOG_HPP

#include "book.hpp"
#include <vector>

class LibraryCatalog
{
private:
    vector<BOOK> boos;
public:
    void addBook(string title, string author, uint16_t year);
    void searchByAuthor(string author);
    void displayCatalog();

};

#endif //__LIBRARY_CATALOG_HPP