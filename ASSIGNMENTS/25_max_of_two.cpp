#include <iostream>
using namespace std;
void max(int a,int b)
{
   if (a>b)
   {
     cout<<"max is :"<<a;
   }
   else if(b>a)
   {
    cout<<" max is :"<<b;
   }
   else
   {
     cout<<"both are  same "<<a <<b;
   }
   
}
int main()
{
    int a,b;
    cout<<"enter a number:";
    cin>>a;

    cout<<"enter a number:";
    cin>>b;

    max(a,b);
    return 0;
}
