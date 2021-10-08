#include<iostream>
using namespace std;

int main()
{
    for(int i=0;i<20;i++)
    {
        if(i%2==0 || i==0)
        {
            cout<<i<<" Even number"<<endl;

        }
        else{
            cout<<i<<"  Odd number"<<endl;
        }
    }


    return 0;

}