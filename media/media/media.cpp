// media.cpp : This file contains the 'main' function. Program execution begins and ends there.

/* Bill Wohlleber
Exercise media main
This program will create an array of media pointers
*/
#include<iostream>
#include"media.h"
#include"movie.h"
#include"book.h"
using namespace std;

void sort(media* mm[], int N);  // selection sort array of media pointers of size N

int main()
{
    media *m[3];   // array of three super media pointers
    int j;
    string name, rating, author;
    float price;

    name = "Planet of the Apes";
    price = 8.90f;
    rating = "G";
    m[0] = new movie(name, price, rating);
    // address of sub object assigned into pointer element of array

    name = "Back to the Future";
    price = 13.90f;
    rating = "PG";
    m[1] = new movie(name, price, rating);

    name = "Intensity";
    price = 7.90f;
    author = "Dean Koontz";
    m[2] = new book(name, price, author);

    sort(m, 3);   // selection sort array of media pointers of size N

    for (j = 0; j < 3; j++)
    {
        m[j]->print();	// dynamic binding
        cout << endl;
    }
    return 0;
}


void sort(media* mm[], int N) // build selection sort function
{
    int pass, j, min;
    media* temp; // pointer temp

    for (pass = 0; pass <= N - 2; pass++) // passes
    {
        min = pass;
        for (j = pass + 1; j < N; j++) // inner each pass
        {
            if (*mm[j] < *mm[min]) // compare the objects
            {
                
                min = j;
            }
        }

        //swap the pointers in the arrary
        temp = mm[min];
        mm[min] = mm[pass];
        mm[pass] = temp;
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
