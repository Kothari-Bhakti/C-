//Write a program to create a class Book with data members: bookId, title,
// and price. Create and use multiple objects to store and display data for 3 different books.

#include <iostream>
using namespace std;

class book
{ 
   public:

   int book_id; 
   string  book_title;
   int book_price;
  
};
int main()
{

book a,b,c;
cout<<"enter 1st book id:";
cin>>a.book_id;
cout<<"enter 1st book title:";
cin>>a.book_title;
cout<<"enter book  price:";
cin>>a.book_price;


cout<<"enter 2nd book id:";
cin>>b.book_id;
cout<<"enter 2nd book title:";
cin>>b.book_title;
cout<<"enter book  price:";
cin>>b.book_price;


cout<<"enter 3rd book id:";
cin>>c.book_id;
cout<<"enter 3rd book title:";
cin>>c.book_title;
cout<<"enter book  price:";
cin>>c.book_price;

cout<<"\n\n\n";

cout<<" 1st book id:"<<a.book_id<<endl;
cout<<" 1st book title:"<<a.book_title<<endl;
cout<<" book  price:"<<a.book_price<<endl;
cout<<"\n\n\n";



cout<<" 2nd book id:"<<b.book_id<<endl;
cout<<" 2nd book title:"<<b.book_title<<endl;
cout<<" book  price:"<<b.book_price<<endl;

cout<<"\n\n\n";


cout<<" book id:"<<c.book_id<<endl;
cout<<" book title:"<<c.book_title<<endl;
cout<<" book  price:"<<c.book_price<<endl;


return 0;

}



