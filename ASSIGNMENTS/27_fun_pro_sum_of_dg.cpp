#include <iostream>
using namespace std;
void sum(int ,int);
int main()
{
    int  a=5 , b=10;
    sum(a,b);
    
    return 0;
}
void sum(int x, int y)
{
    int total=x+y;
    cout<<"total :"<<total;
}