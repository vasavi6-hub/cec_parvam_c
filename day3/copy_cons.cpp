#include <iostream>
#include <string>
using namespace std;
class student
{
    public:
        char*name;
        int age;
    student(char*n,int a)
    {
        name=new char[strlen(n)+1];
        strcpy( name, name.n);
        age=a;
        cout<<"copy constructor called for "<<endl;
    }
    void display()
    {
        cout<<name<<"("<<age<<")"<<endl;
    }
    ~student()
    {

        delete[] name;
    }
};
int main()
{
    student s1("arjun",20);
    student s2=s1;
    s1.display();
    s2.display();
    return 0;
}