// scope resolution operator are used to many different purpos , in the  this program we can used to access globle variable 
#include <iostream>
using namespace std;
int i=10; //globle variable
int main()
{
    int i=20;// local variable
    cout<<"i="<<i<<"\n";//i=20
    cout<<"i="<<::i;//i=10
    return 0;
}