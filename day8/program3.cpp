#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream file("nonexistent.txt");
    if(!file)
    {
        cout<<"Error opening file!"<<endl;
    }
    if(file.fail())
    {
        cout<<"File operation failed!"<<endl;
    }
    if(file.is_open())
    {
        cout<<"File opened successfully!"<<endl;
        file.close();
    }
    ifstream file2("data.txt");
    if(file2.good())
    {
        cout<<"File is good for I/O operations!"<<endl;
    }
    file2.close();
    return 0;
}