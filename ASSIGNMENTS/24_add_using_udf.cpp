#include <iostream>
using namespace std;
int  add( int x, int y) // two argument
{  
     return x+y; // return function
}
int main()
{ 

     int x,y;
     cout<<"enter a num:";
     cin>>x;
     cout<<"enter a num:";
     cin>>y;  
     cout<<add(x,y); //call function
}