#include<iostream>
using namespace std;

// Another mind opening problem to enhance your logic

int pow(int base,int power)
{
    int result =1;
    for(int i =0;i<power;i++)
    {
        result=result*base;

        

    }
    return result;


    cout <<"The exponent function answer is :"<<result;

}

int main()
{
    cout<<pow(2,4)<<endl;    
    cout<<pow(3,2)<<endl;    
    cout<<pow(2,4)<<endl;
    cout<<pow(5,5);


    return 0;

}