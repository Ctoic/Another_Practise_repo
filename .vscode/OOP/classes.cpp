#include<iostream>
using namespace std;

class Book
{
private:
    // only you can access this data

public:
// what the attrbute a book have write down
// title author number of pages and 
        string title;
        string author;
        int number_pages;
        // a complex datatype
    Book(/* args */);
    ~Book();
};

Book::Book(/* args */)
{
}

Book::~Book()
{
}


int main()
{
    // above class is blue print or tenplate
    // object is an actuall instance of that class
    // obj is real book or actual data 

    Book book1;
    book1.title="Rich Dad Poor Dad";
    book1.author="Robbin Sharma";
    book1.number_pages=500;

     Book book2;
    book2.title="fourty rules of love";
    book2.author="Elif Shafak";
    book2.number_pages=500;


    cout<<book1.title<<endl;
    cout<<book1.number_pages<<endl;

    cout<<book2.title<<endl;
    cout<<book2.author<<endl;

    // defining the book and change the values and attribute






    // by default we can store number wholw decimal and text
    // there are a  lot of things we cannot represent all real entitiies using number
    // all real world entities have mixed data
    // different functions are performed
    // like program a libraray and I cannot use book as data type by default
    // we haeve only limited data type
    // we creat a classs
    // it is a new data type in C++ tha's ehy usefull
    // Blue print for new data type
    // store and run different data type
    // class is specification or blue print
    // class is new data type
    // class give it a name



    return 0;
}