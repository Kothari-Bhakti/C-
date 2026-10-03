#include <iostream>
// sum of digit in cpp
// 1+2+3+4+5=15
using namespace std;
int main()
    
{
      int sum=0;
      for(int i=1;i<=5;i++)
      {
        if (i==5)
        {
           std::cout<<i;
        }
        else
        {
            std:: cout<<i<<"+";
              
        }  
        
          sum=sum+i; 
      }
      std::cout<<"="<<sum;
      return 0;
}