#include<iostream>
using namespace std;

class Default_cons
{
    public:
    int num,num2;

    Default_cons()
    {
        num=23;
        num2=24;
    }
};
// Even we do not provide constructor explictly 
//the compiler wll define it implicitly

int main()
{
    // without parmeters 
    Default_cons constructor;
    cout<<constructor.num<<endl;
    cout<<constructor.num2<<endl;



    return 0;
}