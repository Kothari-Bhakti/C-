#include <iostream>
using namespace std;
//class definition
class a
{
    public:
    //a static data member here
    static int x;
};
int a::x=2;
int main()
{
    cout <<"accessing  static datamember:"<<a::x;
    return 0;
}