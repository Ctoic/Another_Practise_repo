// Constructors and Distructors usage
#include<iostream>
#include<string>
using namespace std;

class Car
{
private:
    /* data */
public:
    string name;
    string model;
    int cost;
    // mULTIPLE cONSTRUCTORS
    //
    Car()
    {
        name="vigo";
        model="X-642";
        cost=2434235;

    }
    Car(string aname,string amodel, int acost)
    {
        name=aname;
        model=amodel;
        cost=acost;

    }

};

int main()
{
    Car car1("Tesla","Beast-840",1400002020);

    Car car2("Honda","Beast-3282",627364234);

    Car car3;  // another way for constructors
    cout<<car3.model<<endl;


    cout<<car2.cost<<endl;


    cout<<car1.cost<<endl;
    cout<<car1.model;

    if(car1.cost<car2.cost)
    {
        cout<<"Tesla is less expenxive"<<endl;

    }
    else{
        cout<<"Honda is affordable"<<endl;

    }


    return 0;
}
