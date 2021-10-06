#include<iostream>
using namespace std;

int max(int a ,int b)
{
    return a>b?a:b;

}

int min(int a, int b)
{
    return a<b?a:b;

}

// == comparison
// = assigning number


int main()
{
   cout<< max(1,3)<<endl;
   cout<<min(1,3);


    return 0;
}