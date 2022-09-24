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

}; // end of class Book

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
    cout<<title<<" by "<<auther
        <<" has "<<numPages<<" pages, "
        <<"and its genre is "<<genre<<endl;
}


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
