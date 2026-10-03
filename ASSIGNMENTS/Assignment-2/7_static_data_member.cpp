#include  <iostream>
using namespace std;
  
static int count=0;


class demo
{
    public:

    demo()
    {  
          count++;
          cout<<"object  created"<<count<<"times"<<"\n\t";
    }
};
int main()
{
    demo obj;
    demo obb;
}