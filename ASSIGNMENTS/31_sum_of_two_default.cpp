#include <iostream>
using namespace std;

 int tot(int a,int b,int c=10)// by default b is 10
 {
    return a+b+c;
 }
 int main()
 {
    int a=10,b=20,c=10;
    cout<<"total is:"<<tot(a,b,c);

 }