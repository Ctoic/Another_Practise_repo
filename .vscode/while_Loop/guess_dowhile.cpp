#include<iostream>
using namespace std;

// it was an amazing problem to refresh your brain and souls :=]
// it is going to messy ad we have to use all the basic concepts in programming
// try differnet ways
int main()
{
    int secret_num=19;
    int guess;
    int guessCount=0;
    int guessLimit=3;
    bool outOfguess=false;


    

    do
    {
      if(guessCount<guessLimit )
      {
       cout<<"what's your guess boi"<<endl;
       cin>>guess;
       guessCount++;
      }
      else{
          outOfguess=true;

      }


    }while (secret_num!=guess&& !outOfguess);

    if (outOfguess){
        cout<<"You lost the boi"<<endl;

    }
    else{
        cout<<"You got it right claim your price"<<endl;

    }


    // cout<<"You got it right boi   "<<guess<<"   is the number"<<endl;


        

   

    return 0;

    
}