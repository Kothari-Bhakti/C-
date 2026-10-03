#include <iostream>
using namespace std;

class demo
{
    int *ptr;
    public:
    demo()
    {
        ptr=new int;
        *ptr=10;
    }
    void display()
    {
        cout<<"value:"<<ptr<<endl;
    }
};
// driver code

int main()
{
    // dynamically allocating memmory
    // using new operator

    demo  *obj1=new demo();
    demo  *obj2=new demo();

    // assigning obj1 to obj2

    obj2=obj1;
    // function call

    obj1->display();
    obj2->display();
    // dynamically deleting the memory
    // allocated to obj1

    delete obj1;
    return 0;
}