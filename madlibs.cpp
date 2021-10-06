#include<iostream>
#include<string>
using namespace std;

int main(){
    // Random words story 
    string color,plural_noun,hero;

    cout<<"Enter color"<<endl;
    getline(cin,color);

    cout<<"enter plural_noun"<<endl;
    getline(cin,plural_noun);

    cout<<"Enter your Crush name"<<endl;
    getline(cin,hero);


    cout<<"Rosses are "<<color<<endl;
    cout<<plural_noun<<" are blue"<<endl;
    cout<<"I love "<<hero<<endl;


    return 0;

}