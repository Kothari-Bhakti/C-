#include <iostream>
using namespace std;

void sum(int x, int y)
{
    cout<<x+y;
}
void sum(int x,int y,int z)
{
    cout<<x+y+z;
}
int main()
{
    int x=5,y=10,z=10;
    sum(x,y);
    cout<<"\n\n";
    sum (x,y,z);
    return 0;
}