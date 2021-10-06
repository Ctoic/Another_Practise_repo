#include<iostream>
using namespace std;

void hi()
{
    cout<<"hello wordl";

}
void info(string name ,int age);  // declaring the function here 
int sum(int a ,int b)
{
    return a+b;
}

string length_str(int str)
{
    int count=0;
    for(int i =0;i<6;i++)
    {
        count+=1;
        return count;
    }
}


int main(){
    cout<<"top:";
    hi();
    cout<<"bottom"<<endl;
    // we can use the block of code as many times we want to use
    // save our time and efforts
    sum(1,3);  // sum function which has a return value


   info("najam",21);
   info("sabahat",22);
   info("zulfi",22);
   info("farid",22);
   




    return 0;

}
// first declare the function above and write the code below main function it will not 
// popup any errror coz you have declared and during compilation it will consider it
void info(string name ,int age)
{
    cout<<"Your name is :"<<name<<endl;
    cout<<"Your age is :"<<age<<endl;

}