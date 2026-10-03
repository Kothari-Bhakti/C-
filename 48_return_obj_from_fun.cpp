#include <iostream>
using namespace std;

class demo
{
    int a;
    public:

    void set(int x)
    {
        a=x;
    }
    demo sum(demo obj1,demo obj2)
    {
        demo obj3;
        obj3.a=obj1.a +obj2.a;
        return obj3;

    }
    void print()
    {
        cout<<"value of a:"<<a<<endl;
    }
};

int  main()
{
    demo d1,d2,d3;
    d1.set(10);
    d2.set(20);

   demo d4= d3.sum(d1,d2);
    d4.print();

    return 0;
}