/*
media.h defines a general media type with 
fields for name and price.The program has 
a virtual print func to allow dynamic binding 
and an overloaded <operator to allow sorting objects 
alphabtically by their name field.
*/

#ifndef MEDIA_H
#define MEDIA_H
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class media // super class
{
    protected:
        string name;
        float price; //protected fields

    public:
        media(string n = "", float p = 0.0)
        {
            name = n;
            price = p;
        }

        
        virtual void print() // virtual == dynamic binding 
        {
            cout << "Name is " << name << endl;
            cout.setf(ios::fixed | ios::showpoint); // fix the price to 2 dp
            cout << "Price is " << setprecision(2) << price << endl;
        }

        
        bool operator<(media m) //overload to compare objs
        {
            if (name < m.name)
                return true;
            else
                return false;
        }
};
#endif
