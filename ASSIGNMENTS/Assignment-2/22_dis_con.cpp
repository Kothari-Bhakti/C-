//Create a class Student with data members: name, rollNo, and marks. Use a constructor to initialize values.
//Use a destructor to display a message when thdetailse object is destroyed. add a member function to display student 

#include <iostream>
#include <string.h>
using namespace std;

class student
{
    private:
    char name[10];
    int roll_no;
    int marks;
    

    public:
    student()
    {
        strcpy(name,"bhakti");
        roll_no=66;
        marks=100;

    }
    ~student()
        {
            
            cout<<"\ndistructor was called..";
        }
void dis()
{
    cout<<"name:"<<name<<endl;
    cout<<"roll no:"<<roll_no<<endl;
    cout<<"total marks:"<<marks<<endl;
}
    
};
int main()
{
    student m;
    m.dis();


    return 0;
    
}