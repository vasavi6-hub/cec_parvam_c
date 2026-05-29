#include<iostream>
class student
{
    private:
    string name;
    int age;
    double cgpa;
    public:
    string getName() const {return name;}
    int getAge() const {return age;}
    double getCgpa() const {return cgpa;}

void setName(const string& n) { name = n; }
void setAge(int a) { 
    if (a>0 && a<150){
    age = a; }
else {
    cout<<"Invalid age"<<endl;
    }
}
void setCgpa(double c){
if(c>=0.0 && c<=4.0){
    cgpa = c; }
else {
    cout<<"Invalid CGPA"<<endl;
    }
}
int main(){     
    student s1;
    s1.setName("Alice");
    s1.setAge(20);
    s1.setCgpa(3.5);

    cout<<"Name: "<<s1.getName()<<endl;
    cout<<"Age: "<<s1.getAge()<<endl;
    cout<<"CGPA: "<<s1.getCgpa()<<endl;

    return 0;
}
};