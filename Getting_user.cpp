#include<iostream>
#include<string>
using namespace std;

int main()
{
 int number;
    string name; // use getline(cin ,name)

    cout<<"Entter a number:"<<endl;
    cin>>number;
    cout<<"YOur number is :"<<number<<endl;
    cout<<"Enter your full name :"<<endl;
    getline(cin,name);
    cout<<"My name is ::"<<name<<endl;


    
 
    return 0;

}