#include <iostream>
#include <string>
using namespace std;
class Employee {        
    private:
    int id;
    string name;    
    double salary;
    string department;
    public:
    Employee(int i,const string& n, double s, string d)
    {
        id=i;
        setName(n);
        setSalary(s);
        department=d;

    }
    int getId() const { return id; }
    string getName() const { return name; }     
    double getSalary() const { return salary; }
    string getDepartment() const { return department; }
    void setName(const string& n) 
    {
        if (n.length()>=2)
        {
            name=n;
        }
        else
        {
            cout<<"Invalid name"<<endl;
            name="Unknown";
        }
    }
    void setSalary(double s) 
    {
        if (s>=0)
        {
            salary=s;
        }
        else
        {
            cout<<"Invalid salary"<<endl;
            salary=0.0;
        }
    }
    void setDepartment(const string& d) 
    {
        department=d;
    }
    void giveRaise(double percentage) 
    {
        if (percentage>0)
        {
            salary+=salary*percentage/100;
            cout<<"Salary after "<<percentage<<"% raise: "<<salary<<endl;
        }

    }
void display() const 
    {
     cout<<"ID: "<<id<<"|"
     cout<<"Name: "<<name<<"|"
     cout<<"Salary: "<<salary<<"|"
     cout<<"Department: "<<department<<endl;
    }
};
int main()      
{
    Employee emp1(1,"John Doe",50000,"Engineering");
    emp1.display();
    emp1.giveRaise(10);
    emp1.setSalary(-1000);
    cout<<"Updated Salary: "<<emp1.getSalary()<<endl;
    return 0;       
}   
