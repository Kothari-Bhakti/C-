#include <iostream>

using namespace std;
int main()
{
    for (int i =1; i<=5; i++) //i=1+1=2+1=3+1=4+1=5+1=6
    {
         for (int j=1; j<=i; j++)//j=1<=1 j=1+1=2<=2 j=1+2=3<=3  j=1+3=4<=4 j=1+4=5<=5 (j=1+5=6<=5)
         {
             cout<<" * " ; // *  
                           // *  *
                           // *  *  *
                           // *  *  *  *
                           // *  *  *  *  *
         }   
         cout<<"\n";
         
    }
    return 0;
}