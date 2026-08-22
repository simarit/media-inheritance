/*
book.h inherits from the media super class to 
define a book and adds a new field for 
the book's author and overrides the inherited 
virtual print func to print all the data.
*/

#ifndef BOOK_H
#define BOOK_H
#include <iostream>
#include <string>
#include "media.h" //super class
using namespace std;

class book : public media // inherits from the public media classs
{
private:
    string author;

public:

    book(string n, float p, string a) : media(n, p) //supper class constructor in addition to rating
    {
        author = a;
    }

    void print() //override print func
    {
        cout << "Book\n";
        media::print(); //scope
        cout << "Author is " << author << endl;
    }
};
#endif
