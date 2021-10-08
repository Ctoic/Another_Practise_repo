#include<iostream>
using namespace std;

// make programming interesting bois
// guessing game

int main()
{
    int secret_number=8;
    int guess;

    while (guess!=secret_number)
    {
        cout<<"ENter a number"<<endl;
        cin>>guess;

    }

    cout<<"Yeah boI! you did it :"<<"secret num is :"<<guess;

    return 0;

}