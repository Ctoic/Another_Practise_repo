// constructor a special function that is going to get call whenever we creat an object
#include<iostream>
using namespace std;

class Book
{
private:
    // only you can access this data //not for public use

public:
// what the attrbute a book have write down
// title author number of pages and 
        string title;
        string author;
        int number_pages;
        // a complex datatype
    Book(string name )  // whenever you create an object this function is called
    // this is called constructor
    {
        cout<<name<<endl;

    }


    
   
};


int main()
{
    // above class is blue print or tenplate
    // object is an actuall instance of that class
    // obj is real book or actual data 

    Book book1("Rich Dad Poor Dad");
    book1.title="Rich Dad Poor Dad";
    book1.author="Robbin Sharma";
    book1.number_pages=500;

     Book book2("40 rules of love");
    book2.title="fourty rules of love";
    book2.author="Elif Shafak";
    book2.number_pages=500;


    cout<<book1.title<<endl;
    cout<<book1.number_pages<<endl;

    cout<<book2.title<<endl;
    cout<<book2.author<<endl;

    return 0;
}