// Create a class Student with data members: name, rollNo, and marks.
 //write a default constructor to initialize values to default.
 //Write a parameterized constructor to initialize all values.



#include <iostream>
#include <string.h>
using namespace std;

class student
{

    private:
    string name;
    int rollno;
    int cpp,html,cms;
    public:

    student()
    {
        name="bhakti";
        rollno=66;
        cpp=90;
        html=80;
        cms=70;
    }
    
    student(string nm,int rn,int c,int h,int cm)
    {
         

        name=nm;
        rollno=rn;
        cpp=c;
        html=h;
        cms=cm;
    }
    void display()
    {
        cout<<"name is:"<<name<<endl;
        cout<<"roll no is:"<<rollno<<endl;
        cout<<"marks is :"<<cpp<<"\t"<<html<<"\t"<<cms<<endl;
    }
     
};
int main()
{
    student a;

    string n;
    int r;
    int cpp,html,cms;


         cout<<"enter your name:";
          cin>>n;
          cout<<"enter your roll no:";
          cin>>r;
          cout<<"enter marks for 3 sub:";
          cin>>cpp>>html>>cms;

   student b(n,r,cpp,html,cms);

    //    student b("meera",77,90,80,70);
       b.display();cout<<endl;
       a.display();

       return 0;
    

}