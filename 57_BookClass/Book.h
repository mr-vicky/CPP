#ifndef BOOK_H
#define BOOK_H
#include<iostream>
#include<string>
using namespace std;

class Book
{
public:
    Book(string auther, string title, string genre, int numPages);
    string getAuther() const;
    string getTitle() const;
    string getGenre() const;
    int getNumPages() const;
    void printBookDetails() const;

private:
    string auther;
    string title;
    string genre;
    int numPages;

};

#endif
