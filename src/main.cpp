#include <iostream>
#include <limits>

#include "library_catalog.hpp"
using namespace std;

LibraryCatalog catalog{};

enum Menus
{
    ADD_BOOK = 1,
    SEARCH_AUTHOR,
    DISPLAY_CATALOG,
    EXIT,
    MAX_MENU_COUNT = EXIT
};

void displayAddBookMenu();
void displaySearchAuthorMenu();

int main()
{
    int choice{};

    do
    {
        cout << "\nLibrary Catalog Menu\n";
        cout << "1. Add Book\n";
        cout << "2. Search by Author\n";
        cout << "3. Display Catalog\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        while (!(cin >> choice))
        {
            cout << "Invalid Choice. Please enter an integer: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        switch (choice)
        {
            case ADD_BOOK:
            {
                displayAddBookMenu();
                break;
            }
            case SEARCH_AUTHOR:
            {
                displaySearchAuthorMenu();
                break;
            }
            case DISPLAY_CATALOG:
            {
                catalog.displayCatalog();
                break;
            }
            case EXIT:
            {
                cout << "Exiting the catalog system. Goodbye!" << endl;
                break;
            }
            default:
            {
                cout << "Invalid choice. Please try again." << endl;
                break;
            }
        }
    } while (choice != MAX_MENU_COUNT);

    return 0;
}

void displayAddBookMenu()
{
    string title{};
    string author{};
    uint16_t year{};
    cout << "Enter book title: ";
    cin.ignore();
    getline(cin, title);
    cout << "Enter author name: ";
    getline(cin, author);
    cout << "Enter publication year: ";
    while (!(cin >> year))
    {
        cout << "Invalid Year. Please enter an integer: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    catalog.addBook(title, author, year);
    cout << "Book added successfully!" << endl;
}

void displaySearchAuthorMenu()
{
    string author{};
    cout << "Enter author name to search: ";
    cin.ignore();
    getline(cin, author);
    catalog.searchByAuthor(author);
}