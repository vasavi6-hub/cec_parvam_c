#include <iostream>
#include <string>           
using namespace std;
class rectangle
{
    private:
    double length;
    double width;
    public:
    rectangle()
    {
        length = 0;
        width = 0;
        cout << "default constructor called" << endl;
    }
    rectangle(double side)
    {
        length = side;
        width = side;
        cout << "square constructor called" << endl;
    }
    rectangle(double l, double w)
    {
        length = l;
        width = w;
        cout << "two parameter constructor called" << endl;
    }
    rectangle(const rectangle &r)
    {
        length = r.length;
        width = r.width;
        cout << "copy constructor called" << endl;
    }
    double area()
    {
        return length * width;
    }
};
int main()
{
    rectangle r1;
    rectangle r2(5.0);
    rectangle r3(5.0, 3.0);
    rectangle r4 = r3;
  cout<<"\nareas:"<<r1.area()<<","<<r2.area()<<","<<r3.area()<<","<<r4.area()<<endl;
    return 0;
}