#include <iostream>
using namespace std;

class average
{
    int a,b;
    public:
    void read();
    void print();
    int avg();

};
void average:: read()
{
    cout<<"\n enter a and b:";
    cin>>a>>b;
}
void average:: print()
{
    cout<<"value of a:"<<a;
    cout<<"value of b:"<<b;
    cout<<"\n average is:"<<avg();// function called inside of another function
}
int average::avg()
{
    return (a+b)/2;// average of a  and b
}
int main()
{
    average a;// average object is a
    a.read();// read function called
    a.print();// print function called 
}