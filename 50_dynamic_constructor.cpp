#include <iostream>
using namespace std;

class  demo
{
    const char* p;
    public:
    // default constructor demo()

//allocating memory at run time
demo()
{
 p=new  char[10];
 p="cpp is easy";

}
void display()
{
    cout <<p<<endl;
}
};

int main()
{
    demo obj;
    obj.display();
}