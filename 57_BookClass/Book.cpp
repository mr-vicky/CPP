#include "Book.h"

Book::Book(string auther, string title, string genre, int numPages)
{
    this->auther = auther;
    this->title = title;
    this->genre = genre;
    this->numPages = numPages;
}
string Book::getAuther() const
{
    return auther;
}
string Book::getTitle() const
{
    return title;
}
string Book::getGenre() const
{
    return genre;
}
int Book::getNumPages() const
{
    return numPages;
}

void Book::printBookDetails() const
{
    cout << title << " by " << auther
        << " has " << numPages << " pages, "
        << "and its genre is " << genre << endl;
}