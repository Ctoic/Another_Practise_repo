#include<iostream>
using namespace std;

// pointer memory address

int main()
{
    int age =19;
    int *pAge=&age;
     
    double gpa=3.5;
    double *pgpa=&gpa;

    string name="Najam";
    string *pname=&name;




    cout<<&age<<endl;
    cout<<&gpa<<endl;
    cout<<&name<<endl;

    // pointer value using ponter variables

    cout<<*pAge<<endl; // * s used for derefrencing 

    cout<<"This is my gps"<<*&gpa<<endl;
    // pointere are tyoe of information
    // we can derefrance them
    
    


}