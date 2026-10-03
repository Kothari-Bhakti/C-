#include <iostream>
using namespace std;

class a
{
    public:
    //declare inline fun
    inline int square(int x);
};
// define the function
inline int a::square(int x)
{
      return x*x;
}
int main()
{
    a obj;
    cout<<obj.square(4);
    return 0;
}

