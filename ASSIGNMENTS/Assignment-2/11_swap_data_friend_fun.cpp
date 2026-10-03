#include <iostream>
using namespace std;

class swapdata
{
    private:// private data member
    int val1;
    int val2;
    
    public:
    friend void fun();// define friend function for accesssing private data member
};
void fun()
{
    swapdata z;// object z
    int a;
    int b;

    cout<<"enter value for a:";cin>>a;
    cout<<"enter value for b:";cin>>b;
    
    z.val1= a;
    z.val2=b; 

   // output
   cout<<"value before swapping:"<<z.val1 <<" "<<z.val2<<endl;

   // swapping process

   int temp=z.val1;
   z.val1=z.val2;
   z.val2=temp;

   //after swapping 
   cout<<"value after swapping:"<<z.val1 <<" "<<z.val2<<endl;
;
   
}
int main()
{
    fun();
    return 0;
}