#include <iostream>
using namespace std;
// friend function ->  a friend function is a function that is not 
//a member of class but is allowed to access 
//private and protected members of that class we declare 
//it inside the class using the keyword friend
class test
{
    private:
    int x;

    protected:
    int y;

    public:
    int z;

    friend void fun();
};
void fun()
{
 test t;
     t.x=10;
     t.y=20;
     t.z=30;

   cout<<"x:"<<t.x<<endl;
   cout<<"y:"<<t.y<<endl;
   cout<<"z:"<<t.z<<endl;

}
int main()
{
    fun();
    return 0;
}