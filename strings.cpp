#include<iostream>
using namespace std;

int main()
{ 
    // common type of data plan data type
    // open and close 
    // endl is new line
    string mast="here are cool features";
    // changing specific charter 
    mast[2]='P';
    cout<<mast<<endl;


    // string functions
    // length
    cout<<mast.length()<<endl;
    cout<<mast[12]<<endl; // start fro
    
    // information about the striing
    cout<<mast.find("are",0);

    // sub string allow us to take a part of string 

    cout<<mast.substr(8,3);
    // we can also store of substring into variables




}