#include<iostream>
using  namespace std;

class Student{

    public:
    string name;
    string major;
    double gpa;

    Student(string aname,string amajor, double agpa)
    {
        name=aname;
        major=amajor;
        gpa = agpa;

    }

    // each of the object which we will create will call this function
    // WE can define a generall function in our class
    //depending on the object this function will act differenly

    bool hasdeanlist()
    {
        if (gpa>=3.5)
        {
            return true;
        }
        else{
            return false;

        }
    }


};

int main()
{
    Student sts1("Rohail","Computer Science",3.3);
    Student sts2("Ruhoi","Mathematics",3.4);
    Student sts3("najam","CS",3.8);

    cout<<sts1.hasdeanlist()<<endl;
    cout<<sts2.hasdeanlist()<<endl;
    cout<<sts3.hasdeanlist()<<endl; 
    // 0 and 1 for true and false



    




    return 0;
}