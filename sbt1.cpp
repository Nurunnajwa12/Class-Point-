#include <iostream>
#include<string>
using namespace std;

class Point
{

    private:
    int x;
    int y;

    public:
    Point()
    {
        x=0;
        y=0;
    }

    Point(int _x,int _y)
    {
        x=_x;
        y=_y;
    }

    void displayC()
    {
        cout<<"x= "<<x<<" y= "<<y<<endl;
    }


    void display(string title)
    { 
        cout<< title <<"x= "<<x<<" y= "<<y<<endl;
    }

    Point operator +(const Point& p)
    {
        Point temp;
        temp.x=x+p.x;
        temp.y=y+p.y;
        return temp;
    }

    friend double calcSlope(const Point& a, const Point& b);

};

double calcSlope(const Point& a, const Point& b) 
{
    double temp;
    temp=((a.y-b.y/a.x-b.x));
    return temp;
}

int main()
{
    Point p1(1,2);
    Point p2(3,4);
    Point p3;
    double p4;

    p1.display("");
    p2.display("");

    p4=calcSlope(p1,p2);
    p3= p1+p2;
    p3.display("Third Point: ");
    cout<<endl;
    cout<<"Slope = "<<p4<<endl;
    











}
