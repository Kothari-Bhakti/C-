// Create a class Student with data members: name, rollNo, and marks.
// Use a parameterized constructor to initialize values.
// Create a copy constructor to copy the values from another Student object.
// Display the student details using a member function.

#include <iostream>
using namespace std;

class student
{
    private:
    string name="0";
    int rollno=0;
    int marks[5];
    public:

    student(string nm,int rn,int m[5])
    {
     name=nm;
     rollno=rn;
    //  marks[5]=m[5];
    for (int i = 0; i < 5; i++)
    {
        marks[i]=m[i];
    }
    
    }

    student(student& n)
    {
        name=n.name;
        rollno=n.rollno;
        // marks=n.marks;
        for (int i = 0; i < 5; i++)
        {
            marks[i]=n.marks[i];
        }
    }
    void display()
    {
        cout<<"\n\n";
        cout<<"name is:"<<name<<endl;
        cout<<"roll no is:"<<rollno<<endl;
        for (int j = 0; j < 5; j++)
        {
             cout<<"marks of sub \t"<<j+1<<"is:"<<marks[j]<<endl;
        }     
        
    }

    
};
int main()
{
  
   string nm;
   int roll;
   int mark[5];

   cout<<"enter name:";
   cin>>nm;

   cout<<"enter roll no:";
   cin>>roll;

 
     for (int i = 0; i < 5; i++)
    {
          cout<<"enter marks:";
          cin>>mark[i];    
    }
     
    student s(nm,roll,mark);
 
    student s1(s);
    s1.display();

    return 0;

}