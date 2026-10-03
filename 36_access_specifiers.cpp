#include <iostream>
using namespace std;

class example
{
    public:

    int publicvar;  //accessible anywhere
    void showpublic()
    {
        cout<<"public function ";
    }
    protected:

    int protectedvar;//accessible in class + derived class

    void showprote()
    {
        cout<<"protected function";

    }

    private:
    int privatevar;//accessible only in this

    void showprivate()
    {
        cout<<"private function";
    }
};
int main()
{
    example obj;
    obj.publicvar=10;
      obj.publicvar=10;
    obj.showpublic();
    //obj.protectedvar=20;
    //obj.privatevar=30;

    return 0;

}