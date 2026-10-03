#include <iostream>

using namespace std;
int main()
{
   int f=1;
   int num;
   cout<<"enter any num:";
   cin>>num;

   if (num<0)
   {
      cout<<"not possible";
   }
   else
   {
         
   for (int i = 1; i <=num; i++)
   {

      f*=i;
      
   }
   cout<<"fec:"<<num<<":"<<f;

   }
   



}