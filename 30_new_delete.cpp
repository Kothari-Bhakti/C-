// memory managment operator in  cpp
// there are two memory managment operator 1) NEW 2)DELETE
//1) NEW are used to allocate memory
//2) DELETE are used to deallocate memorey
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // // allocate memory
     int* num=new int;
     *num=100;
      cout<<"value:"<< *num <<endl;

   //deallocate  memory
   delete num;

   //allocate memory
   int* arr=new int[3]{1,2,3};
   for (int i = 0; i < 3; i++)
   {
        cout<<arr[i]<<" ";

       
   }

    //deallocate memory
        delete []arr;
       
    return 0;
   
}