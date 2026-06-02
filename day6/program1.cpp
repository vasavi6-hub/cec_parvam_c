#include <iostream>
#include <string>
using namespace std;
class Calculator {
public:
    int add(int a, int b) {
    cout<<"int+int called"<<endl;
        return a + b;
    }
    double add(double a, double b) {
    cout<<"double+double called"<<endl;
    return a+b;
    }
    string add(string a, string b) {
    cout<<"string+string called"<<endl;
    return a+b;
    }
     double add(int a, double b) {
    cout<<"int+double called"<<endl;    
    return a+b;
    }   
    int add(int a, int b, int c) {
    cout<<"int+int+int called"<<endl;       
    return a + b + c;
    }   
};
int main() {
    Calculator calc;
    cout << calc.add(5, 10) << endl; 
    cout << calc.add(3.5, 2.5) << endl; 
    cout << calc.add("Hello, ", "World!") << endl; 
    cout << calc.add(5, 3.5) << endl; 
    cout << calc.add(1, 2, 3) << endl; 
    return 0;
} 
