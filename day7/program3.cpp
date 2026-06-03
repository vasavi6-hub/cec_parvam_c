#include <iostream>
#include<string>
using namespace std;
class Student {
    public:
        string name;
        int age;
        Student(string n, int a) : name(n), age(a) {}
        void display() {
            cout << "Name: " << name << ", Age: " << age << endl;
        }
};
int main() {
    Student* s1 = new Student("Alice", 20);
    cout<<"name: "<<s1->name<<", age: "<<s1->age<<endl;
    s1->display();
    (*s1).display();
    delete s1;
    return 0;
}

