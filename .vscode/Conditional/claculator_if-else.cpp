#include<iostream>
using namespace std;




int main()
{
    int num,num2;
    int result;
    char op;

    cout<<"Enter first number :"<<num<<endl;
    cin>>num;

    cout<<"Enter the operator"<<endl;
    cin>>op;

    cout<<"enter the second number"<<endl;
    cin>>num2;

    if (op=='+')
    {
        cout<<num+num2;

    }
    else if(op=='-')
    {
        cout<<num-num2;

    }
    else if(op=='/')
    {
        cout<<num/num2;

    }
    else if(op=='%')
    {
        cout<<num%num2;

    }
    else{
        cout<<"Invalid operation try again"<<endl;
        
    }


    
    


    return 0;
}