
//Create a class Book with title, author, and price as data members.
// Write a parameterized constructor to initialize all values.
//Display the details using a member function.
#include <iostream>
using namespace std;

class book
{
    public:
    string book_title;
    string author_name;
    int book_price;


    book(string b,string an,int bp)
    {
     book_title=b;
     author_name=an;
     book_price=bp;
    }
     void dis()
     {
        cout<<"book title is:"<<book_title<<endl;
        cout<<"author name is:"<<author_name<<endl;
        cout<<" book price is:"<<book_price<<endl;
     }
};
int main()
{
    
    string b;
    string nm;
    int p;

    fflush(stdin);

    cout<<"enter your book title:";
    getline(cin,b);

    cout<<"enter  author name:";
    cin>>nm;

    cout<<"enter book price:";
    cin>>p;
    book m(b,nm,p);
    cout<<"\n\n";

    // book b("meditation","bhakti",10000);
     m.dis();

}
