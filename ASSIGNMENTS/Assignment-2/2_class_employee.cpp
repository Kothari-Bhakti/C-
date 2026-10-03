#include <iostream>
using namespace std;

class employee
{
    public:

    int emp_id;
    string emp_name;
    string emp_desi;
    int emp_sal;

    void getdata()
    {
        cout<<"enter your id:"<<"\n";
        cin>>emp_id;
        cout<<"enter your name:"<<"\n";
        cin>>emp_name;
        cout<<"enter your desi:"<<"\n";
        cin>>emp_desi;
        cout<<"enter your salary:"<<"\n";
        cin>>emp_sal;
       
    }

    void putdata()
    {
        cout<<"emp id:"<<emp_id;cout<<endl;
        cout<<"emp name:"<<emp_name;cout<<endl;
        cout<<"emp desi:"<<emp_desi;cout<<endl;
        cout<<"emp sal:"<<emp_sal;cout<<endl;
    }
};

int main()
{
    employee obj;
    obj.getdata();
    obj.putdata();

    return 0;
}