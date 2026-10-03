#include <iostream>
using namespace std;

void swap(int &a,int&b) // a= address of variable a,and b=address of variable b;
{
    int temp=a; // temp =a(5)
    a=b; //a=10
    b=temp;//b=5
  
}
int main()
{
    int a=5,b=10; // a=5,b=10
    // swap(a,b);//function call (if we call function here both output are same)
    cout<<"before swap value of a and b:"<<a<<" "<<b;

    swap(a,b);//function call

    cout<<"\nafter swap value of a  and b:"<<a<<" "<<b;
    return 0;
}