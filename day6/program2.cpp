#include<iostream>
using namespace std;
class demo{
    public:
    void show(int a){
        cout<<"one int: "<<a<<endl;
    }
    void show(int a ,int b){
        cout<<"two ints: "<<a<<" and "<<b<<endl;}
        void display(int a,int b=0){
            cout<<"display: "<<a<<" ,"<<(b?to_string(b):"default value")<<endl;
    }

};
int main(){
    demo d;
    d.show(5);
    d.show(10,20);
    d.display(15);
    d.display(25,30);
    return 0;
}
