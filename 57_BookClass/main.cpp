#include "Book.h"

int main()
{
    Book gameOfThrones("George Martin", "Game of Thrones", "Fantasy", 853);
    Book mathBook("James stewart", "Calculas", "Calculus", 1324);
    Book cppBook("Bjarne Stroustrup", "The C++ programming Language", "Programming", 1443);

    gameOfThrones.printBookDetails();
    mathBook.printBookDetails();
    cppBook.printBookDetails();

    return 0;
}