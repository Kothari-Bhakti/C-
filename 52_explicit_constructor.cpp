#include <iostream>
using namespace  std;

  class test
{
     int value;
     public:
      explicit test(int v)
      {
        value=v;
      }
      void display()
      {
        cout<<"value="<<value<<endl;
      }
   
};
int main()
{
    // test obj=10;// ERROR: IMPLICIT CONSTTRUCTOR NOT ALLOWED

  test obj(10);
  obj.display();

  return 0;
}