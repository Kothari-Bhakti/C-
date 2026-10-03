#include <iostream>
using namespace std;
int main()
{
    int a;
    cout<<"enter number:";
    cin>>a;

    if (a<0)
    {
         cout<<" negative number";
    }
    else if (a>0)
    {
         cout<<"positive number";
    }
    else if (a==0)
    {
         cout<<"number is zero";
    }
    else
     cout<<"entered value is not any number";
    

    
}