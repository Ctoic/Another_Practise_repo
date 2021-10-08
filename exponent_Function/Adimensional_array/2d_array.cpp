#include<iostream>
using namespace std;

// Two dimensional array is basically array of array
// it is really handi for storing multiple data
// concept of colum and row comes into play
//------------------
//|___|_____|______| 3*3 matrix
//|___|_____|______| A[3][3]
//|   |     |      |
//------------------

// Initialixation is also carried out by two methods

int main()
{
    // this is the better way of initializtion 
    // here the nested curly brackets are used for row reresentation

    int arra[3][3]={
                    {1,3,4},
                    {2,6,7},
                    {8,4,2}
                    };

    cout<< arra[0][2]<<endl;
    cout<<arra[2][2]<<endl;

    // nested for loop to iteri<3te two dimensional array
    // looping through complex situation
    // Alot of time you write coments for human
    //   



    for(int i =0; i <3; i++ ){
        for(int j=0 ;j<3;j++)
        {
            cout<<arra[i][j]<<endl;
        }
        cout<<endl;

    }



    return 0;
}