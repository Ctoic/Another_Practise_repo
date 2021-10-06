#include<iostream>
using namespace std;
string dayOfweek(int dayNum)
{
    string dayName;
    switch (dayNum)
    {
    case 0:
        dayName ="Monday";

        break;
    case 1:
        dayName ="Tuesday";
        
        break;
        case 2:
        dayName ="Wednesday";
        
        break;
    case 3:
        dayName ="Thursday";
        
        break;
    case 4:
        dayName ="Friday";
        
        break;

    case 5:
        dayName ="saturday";

        
        break;
    case 6:
        dayName ="Sunday";
        
        break;
    default:
        break;
    }
}
int main()
{
    cout<<"Enter number of day of the wLeek ;"<<endl;
    int dayNum;

    cin>>dayNum;

    cout<<dayOfweek(dayNum);

    return 0;

};