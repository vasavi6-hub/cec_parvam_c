#include<iostream>
#include<string>
using namespace std;
class animal{
    protected:
    string name;
    int age;
    public:
    animal(string n,int a):name(n),age(a){}
    void eat(){
        cout<<name<<" is eating"<<endl;
    }
    void sleep(){
        cout<<name<<" is sleeping"<<endl;
    }
};
class dog:public animal{
    private:
    string breed;
    public:
    dog(string n,int a,string b):animal(n,a),breed(b){}
    void bark(){
        cout<<name<<"(the "<<breed<<") is barking"<<endl;
    }
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<" years"<<endl;
        cout<<"Breed: "<<breed<<endl;
    }
};
int main(){
    dog myDog("Buddy",3,"Golden Retriever");
    myDog.display();
    myDog.eat();
    myDog.sleep();
    myDog.bark();
    return 0;
}
