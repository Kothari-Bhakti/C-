#include <iostream>
using namespace std;

class book
{
    public:
    
    int id;
    string title;
    string Author_Name;
    int price;



    void getdetail()
    {
        cout<<"enter book id:";cin>>id;
        cout<<"enter book title:";cin>>title;
        cout<<"enter book author name:";cin>>Author_Name;
        cout<<"enter book price:";cin>>price;
    }

    void putdetail()
    {

        cout<<"*** book details***"<<"\n\t";
       cout<<"book id:"<<id;cout<<endl;
       cout<<"book title:"<<title;cout<<endl;
       cout<<"book author name:"<<Author_Name;cout<<endl;
       cout<<"book price:"<<price;cout<<endl;
    }
};

int main()
{
    book b1;
    b1.getdetail();
    b1.putdetail();

    return 0;
}
