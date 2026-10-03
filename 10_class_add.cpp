#include <iostream>
using namespace std;

// class addition
// {
//     int a,b;//data member
//     public :

//  void getdata()//member function
//  {
//        cout<<"enter value of a and b:";
//        cin>>a>>b;
//  }

//  void putdata()
//  {
//        cout<<"addition is:"<<a+b;
//  }

// };

// int main()
// {
//     addition obj;
//     obj.getdata();
//     obj.putdata();
//     return 0;
// }


class total
{

    float maths,iks,cf,ans, per; //data member
    public:

    void getmark()
    {
        cout<<"enter marks for maths:";
        cin>>maths;
        cout<<"enter marks for iks:";
        cin>>iks;
        cout<<"enter marks for cf:";
        cin>>cf;
    }

    void output()
    {
        ans=maths+iks+cf;
        cout<<"answer is:"<<ans;
        per=(ans/300)*100;
        cout<<"\nper is:"<<per;

    }


};
int main()
{
    total obj;
    obj.getmark();
    obj.output();

    return 0;
}
