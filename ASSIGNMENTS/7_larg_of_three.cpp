#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter value for a";
    cin>>a;
    cout<<"enter value for b";
    cin>>b;
    cout<<"enter value for c";
    cin>>c;

    if (a>b&&a>c)
    {
        cout<<"a is largest of all";
    }
    else if(b>a&&b>c)
    {
        cout<<"b is largest of all";
    }
    else
    cout<<" c is largest of all";
    
}