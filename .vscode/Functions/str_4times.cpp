#include<iostream>
#include<string>
using namespace std;

string sub_str(string str)
{
    return str.length()<4? str : str.substr(0,2) +str .substr(0,2)+str.substr(0,2)+str.substr(0,2);
}
string repet(string str2)
{
    if (str2.length()<3)
    {
        return str2;

    }
    else{
        return (str2.substr(0,2))+(str2.substr(0,2))+(str2.substr(0,2))+(str2.substr(0,2));
    }
}

int main()
{
    cout<<sub_str("Najam")<<endl;
    cout<<sub_str("ma")<<endl;
    cout<<sub_str("najamama")<<endl;
    cout<<repet("Najam")<<endl;
    cout<<repet("m");


    return 0;


}