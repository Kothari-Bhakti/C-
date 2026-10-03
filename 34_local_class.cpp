#include <iostream>
using namespace std;

 void  myfun()   //FUNCTION name is myfun // define function
{
       class local //class name is local
       {
        public:
        int num; // int num
        void getdata(int n)// function getdata
         {
             num=n;// num =n // num=10
         }

        void putdata() // function put data
         {
        cout<<"the number is:"<<num;
         }


       };
       local obj; //  obj object of class
       obj.getdata(10);// function getdata called
       obj.putdata();// function putdata called
 
}
     int main()// execution start with here
{
     cout<<"local class example in c++"<<"\n";
     myfun(); // function my fun called
     return 0;// 
}
 