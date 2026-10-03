#include <iostream>
using namespace std;

class a// first class
{
    public:// second class inside class a
    class b
    {
        public:
        int num;//data member
        void getdata(int n)
        {
            num=n;
        }
        void putdata()// member function
        {
            cout<<"the number is :"<<num;
        }

    };
};
int main()
{
    cout<<"nested class example in c++"<<"\n";
    // local class example in c++
    a::b obj;
    obj.getdata(10);// getdata function called
    obj.putdata();// putdata function called
    return 0;
}