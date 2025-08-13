// Library.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
#include "Book.h"
using namespace std;
int main()
{
    Book book1;
    book1.setBookDetails("Eat Pray Love", "978-0-14-303841-2", "Elizabeth Gilbert", true);
    Book book2;
    book2.setBookDetails("Pride and Prejudice", "978-0-14-143951-8", "Jane Austen", true);
    Book book3;
    book3.setBookDetails("It Ends With Us", "978-1-5011-1036-8", "Colleen Hoover", true);
    Book book4;
    book4.setBookDetails("The Notebook", "978-0-446-52080-5", "Nicholas Sparks", true);
    Book book5;
    book5.setBookDetails("Many Lives, Many Masters", "978-0-7432-6987-6", "Brian L Weiss", true);


    Book array[300];
    array[0] = book1;
    array[1] = book2;
    array[2] = book3;
    array[3] = book4;
    array[4] = book5;

    string isbnToBorrow = "";
    while (isbnToBorrow != "0") {
        cout << "Input the book's ISBN you want to borrow: ";
        cin >> isbnToBorrow;

        for (int i = 0; i < 300; i++)
        {
            if (array[i].isbn == isbnToBorrow) {
                if (array[i].borrowBook()) {
                    cout << "Don't forget to return the book: " << array[i].title << endl;
                    break;
                }
                else { // we couldn't borrow the book
                    cout << "The book is unavailable";
                }
            }
        }

    }

}
