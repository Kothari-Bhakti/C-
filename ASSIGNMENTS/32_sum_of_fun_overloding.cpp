#include <iostream>
using namespace std;

void sum(int a,int b)
{
    cout<<a+b;
}
void sum(float a,float b)
{
    cout<<a+b;
}
void sum(double a,double b)
{
    cout<<a+b;
}
int main()
{
    int a=10,b=10;
     
     sum(a,b);
     cout<<"\n\n";
     sum(a,b);
     cout<<"\n\n";
     sum(a,b);
     return 0;
}