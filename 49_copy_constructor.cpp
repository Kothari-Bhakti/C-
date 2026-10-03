#include <iostream>
using namespace std;

class a
{
    public:

    int val;
    a(int x)
    {
        val=x;
    }
    a(a& a)// copy constructor
    {
        val=a.val;
    }
};
int main()
{
    a a1(20);
    // creating another object from a1

    a a2(a1);

    cout<<a2.val;
    return 0;
}