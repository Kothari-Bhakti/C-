#include <iostream>
using namespace std;
//program to find the sum of digit of a number using a loop
int main()
{
     int sum=0;
    for (int i = 1; i <=5; i++)
    {
        if (i==5)
        {
            cout<<i;   
        }
        else
        {
            cout<<i<<"+";
        }
        sum=sum+i;
    }
     cout<<"="<<sum;
    return 0;

}