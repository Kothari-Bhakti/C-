// Write a class Student that uses a dynamic constructor to allocate memory for the student's name.
//  accept name and roll number using a parameterized constructor. 
//  display the student details using a member function
#include <iostream>
using namespace std;

class  student
{

    string *name;
    int roll_no;
    public:
    student(string a, int b)
    {
        *name=a;
        roll_no=b;

    }

    void display()
    {
        cout<<"\n name:"<<*name;
        cout<<"\n roll no:"<<roll_no;
    }
};
int main()
{
    cout<<"enter your name:";
    string a;
    getline(cin,a);

    cout<<"enter your roll no:";
    int b;
    cin>>b;

    student *m=new  student(a,b);
    m->display();

    return 0;

}