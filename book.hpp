#if !defined(__BOOK_HPP)
#define __BOOK_HPP

#include <iostream>
#include <string.h>

class Book
{
private:
    string title{};
    string author{};  
    uint16_t year{};
public:
    Book(string t, string a, uint16_t year){}title(t), author(a), year(y);
    void displayInfo();
    string getTitle();
    string getAuthor();
    uint16_t getYear();
}
#endif //__BOOK_HPP