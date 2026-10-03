#include <iostream>
using namespace std;

void count()
{
    static int a=1;
    cout<<a<<"\n";// 1 2 3 
    a++; // 1+1=2+1=3
}
int main()
{
    count();
    count();
    count();

    return 0;  
}