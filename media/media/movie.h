/*
movie.h class inherits from the media superclass
to define a movie and adds a new data field 
for the movie's rating and overrides the inherited 
virtual print func to print all of its specific data.
*/

#ifndef MOVIE_H
#define MOVIE_H
#include <iostream>
#include <string>
#include "media.h" //super class
using namespace std;


class movie : public media //inherited from the super class media
{
private:
    string rating; //extra field for rating

public:

    movie(string n, float p, string r) : media(n, p) //supper class constructor in addition to rating
    {
        rating = r;
    }

    void print() //override print func
    {
        cout << "Movie\n";
        media::print(); //scope
        cout << "Rating is " << rating << endl;
    }
};
#endif
