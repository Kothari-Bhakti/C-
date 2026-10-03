#include <iostream>
using namespace std;

class  demo
{
    int a;
    public :
    void set(int x)// d1->x=10 d2->x=20
    {
        a=x; // d1 a=10 d2 a=20
    }
    void sum(demo obj1,demo obj2)
    {
        a=obj1.a+ obj2.a;
        // a=obj1.a(10)+ obj2.a(20)
        //obj3->30
    }
    void print()
    {
        cout<<"value of a:"<<a<<endl;
        // value of a:10
        //value of a:20
        //value of a:30
    }
};
int main()
{
    demo d1,d2,d3;
    d1.set(10);
    d2.set(20);
    d3.sum(d1,d2);
    d1.print();
    d2.print();
    d3.print();

    return 0;
}