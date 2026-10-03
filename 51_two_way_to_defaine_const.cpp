#include <iostream>
using namespace std;

 class code 
 {
    int id;
    public:
    code(int x)
    {
        id=x;
    }
    void display()
    {
        cout<<"ID="<<id<<endl;
    }
 };

 int main()
 {
    code c(10);// implicitly
    code d=code(20);//explicitly constructor
    c.display();
    d.display();

 }