// paramatrized constructors
#include<iostream>
using namespace std;
// it is possible to pass arguments to the constructor
// Arguments help initalize an object when it is createed
// To create a paramatrzed constructor simply add parameter to its way lke you provide to a normal functons 
// While defining body of constructor initialize the object with parameters

class Point{
    private:
    int x,y;

    public:
    Point(int x1,int  y1)
    {
        x=x1;
        y=y1;

    }

    int getx()
    {
        return x;
    }

    int gety()
    {
        return y;
    }


};

int main()
{
    Point point1(2,4); // implicit way of calling constructor
// Point point1 = Point(2,3)  ---> explicitly callng

    cout<<point1.getx()<<" :Value of the point 1"<<endl;
    cout<<point1.gety()<<":::value of point 1 y"<<endl;





    return 0;

}