#include <iostream>
using namespace std;

int & getvalue( int &a)
{
    return a; // returning referece to a
}
int main()
{
    int x=100;
   // cout<<"x ="<<x;
    getvalue(x)=200; //modifying x 

    cout<<"x ="<<x;//returning reference
    return 0;

}