// Write a C++ program to create a class Person with data members name and age. Create
//an object in main() to accept and display the details using member functions.
#include <iostream>
using  namespace std;

class person
{
    public:
     string name;
     int age;
};
int main()
{
    person p;

    cout<<"ENTER YOUR NAME:";
    cin>>p.name;
    cout<<"ENTER YOUR AGE:";
    cin>>p.age;

    cout<<" name is:"<<p.name<<endl;
    cout<<" age is:"<<p.age;

    return 0;
}