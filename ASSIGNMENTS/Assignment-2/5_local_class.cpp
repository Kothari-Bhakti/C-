#include <iostream>
using namespace std;

void showdetail()
{
    class person
    {
        public:

        int age;
        string name;
        
        void getdata(int a, string n)
        {
            name=n;
            age=a;
        }
        void putdata()
        {
            cout<<"name:"<<name<<endl;
            cout<<"age:"<<age;
        } 
    };

    person obj;
    obj.getdata(18,"bhakti");
    obj.putdata();
}
int main()
{
    cout<<"local class person example"<<"\n";
    showdetail();

    return 0;

}