#include <iostream>

using namespace std;
int sum(int x,int y=10)//y is default
{
    return x+y;  
}
int main()
{
    int a=10,b=12;
    
    cout<<"addition is:"<<sum(a,b);
    return 0;
}