#include<iostream>
using namespace std;


class Chef {

    public:
    void makechicken()
    {
        cout<<"Make cicken"<<endl;

    }

    void maketea()
    {
        cout<<"Make Tea"<<endl;

    }

    void makemacroni()
{
    cout<<"Make macroni"<<endl;


}

};
// inehrit chef class attributes to italian

class Italian_Chef:public Chef{

// this is empty but still able to call function
// this inheritence 
// This is inheriting the attributes of Chef class
// All fuctionality as well as we can add other ttribut

    public:
    void makepasta()
    {
        cout<<"In addition I will serve pasta"<<endl;

    }
 void makemacroni()
{
    cout<<"Make macroni chinese wali"<<endl;


}

}

;

int main()
{
    Chef chef;
    chef.maketea(); // never forget your function round bracets

    Italian_Chef chef2;
    chef2.maketea();
    chef2.makepasta(); 
    // cool inheritence stuff
    chef.makemacroni();
    chef2.makemacroni(); // overwritting can be useful  


    return 0;

}