#include<iostream>
using namespace std;

int main(){
    int array[10];
    for(int i =0; i<10;i++)
    {
        cout<<"Enter "<<i<<"number"<<endl;
        cin>>array[i];

    }
    for(int i =0; i<10;i++)
    {
        cout<<"value stored on index:"<<array[i]<<endl;

    }




    return 0;
}