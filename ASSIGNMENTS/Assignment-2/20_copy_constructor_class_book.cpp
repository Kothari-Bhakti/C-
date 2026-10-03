// Create a class Book with members: title, author, and price. Initialize values using a parameterized constructor.
// Create a copy constructor to initialize a new object using an existing one.
// Display book information

#include <iostream>
using namespace std;

class book
{
    private:
    string title;
    string author;
    int price;

    public:
    book(string tl,string au,int p)
    {
       title=tl;
       author=au;
       price=p;
    }

    book(book &a)
    {
        title=a.title;
        author=a.author;
        price=a.price;
    }

    void display()
    {
        cout<<"book title  is:"<<title<<endl;
        cout<<"book author name is:"<<author<<endl;
        cout<<"book price:"<<author<<endl;
   }
};
int main()
{
    string bt;
    string ba;
    int pr;

   fflush(stdin);

   cout<<"enter book title:";
   getline(cin,bt);

   cout<<"enter author name:";
   cin>>ba;
   
   cout<<" enter book price:";
   cin>>pr;

   book obj(bt,ba,pr);
   book obj1(obj);
   obj1.display();


}