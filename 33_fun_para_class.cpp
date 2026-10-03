#include <iostream>
using namespace std;
class addition//class name is addition 
{
    public:

    int a,b;
    void getdata(int x,int y)
    {
        a=x;
        b=y;
    }
    void putdata();
};
void addition::putdata()//using scope resolution operator
{
    cout<<"ADDITION IS:"<<a+b;
}
int main()
{
    addition obj;
    int a=10,b=10; //int a=10 and int b=10 ,a+b=20
    obj.getdata(a,b);//function called
    obj.putdata();//function called

    return 0;

}
