//Create a class Employee with empId and salary as data members.
// Create an array of objects to input and display details of 5 employees.

#include <iostream>
using namespace std;

class employee
{
    public:
    
    int emp_id;
    float emp_sal;

    void get()
    {
        cout<<"enter emplyoee id:";
        cin>>emp_id;
        cout<<"enter emplyoee salary:";
        cin>>emp_sal;
    }

    void put()
    {
        cout<<"employee id:"<<emp_id;
        cout<<"employee  salary:"<<emp_id;
    }

};
int main()
{
    employee obj[4];
    for (int  i = 0; i <5; i++)
    {
          obj[i].get();cout<<endl;
    }
    
    for (int j= 0; j <5; j++)
    {
          obj[j].put();cout<<endl;
    }
    

}