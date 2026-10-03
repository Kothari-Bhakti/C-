#include <iostream>
using namespace std;

class addition
{
    public:
    int a,b;

    void getdata()
    {
        // a=x;
        // b=y;
        cout<<"enter the value of a and b:";
        cin>>a;
        cin>>b;
        

    }
    void putdata()
    {
        cout<<"addition is:"<<a+b;
    }
};
int main()
{
    addition obj[2];//array of objects
    // int a,b;
    for(int i=0; i<2;i++)
    
         obj[i].getdata();
    
    for (int i = 0; i <2; i++)
    
    obj[i].putdata();
    
    
    return 0;
}