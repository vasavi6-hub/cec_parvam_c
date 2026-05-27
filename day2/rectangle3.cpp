#include <iostream.h>
using namespace std;
class demo{
    public:
    int id;
    demo(int i)
    {
        id=i;
        cout<<"constuctor called for object "<<id<<endl;
    
    }
    ~demo()
    {
        cout<<"destructor called for object "<<id<<endl;

    }
};
int main()
{
    cout<<"----stack object----"<<endl;
    demo stackobj(1);
    cout<<"\n-----help object ---------"<<endl;
    demo* heapobj=new demo(2);
    cout<<"\n stack object goes out of scope automatically......."<<endl;
    cout<<"heap object must be explicitly deleted...."<<endl;
    delete heapobj;
    cout<<"\n end of main()"<<endl;
    return 0;
}