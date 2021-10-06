#include<iostream>
using namespace std;

bool sub(string str)
{
    return (str.length() < 3 && str=="C#") || (str.substr(0,2)=="C#" && str[2] == ' ');
}

int main()
{
    cout<<sub("C#")<<endl;
    cout<<sub("n#jam")<<endl;
    cout<<sub("C#klfjklgj");
    

    return 0;


}