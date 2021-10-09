#include<iostream>
using namespace std;

class Student {
    public:
    string name;
    string major;
    double gpa;
    Student(string aname,string amajor,double agpa)
    {
        name=aname;
        major=amajor;
        gpa=agpa;

    }

};

int main()
{
    Student sts1("najam","Computer Science",3.33);
    cout<<sts1.name<<endl;
    cout<<sts1.gpa<<endl;

    Student sts2("Faorouq","Software Engineering",3.9);
    cout<<sts2.name<<endl;
    cout<<sts2.gpa<<endl;

    return 0;
}