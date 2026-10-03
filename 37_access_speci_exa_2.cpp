#include <iostream>
using namespace std;

class base
{
    public:
    int a =1;

    protected:
    int b =2;

    private:
    int c =3;

};
class derived:public base
{
    public:
    void show()
    {
       cout<<"public a="<<a<<endl;
       cout<<"protected b="<<b<<endl;
       //cout<<"private c="<<c<<endl;
    }
};
int main()
{
    derived d;
    d.show();
    cout<<d.a<<endl;// accessible
    // cout<<d.b<<endl;// protected not accessible outside
      return 0;
}