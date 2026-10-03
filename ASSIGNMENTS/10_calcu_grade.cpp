#include <iostream>
using namespace std;
int  main()
{
    int a;
    cout<<" enter your marks:";
    cin>>a;

    if (a>90)
    {
        cout<<"A+";
    }
    else if (a>80)
    {
        cout<<"A";
    }
    else if(a>70)
    {
        cout<<"B+";
    }
    else if(a>60)
    {
        cout<<"B";
    }
    else if(a>50)
    {
        cout<<"C+";
    }
    else if(a>40)
    {
        cout<<"C";
    }
    else
    cout<<"fail....";

    
    
}