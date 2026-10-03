#include <iostream>

using namespace std;
 struct emp
 {
     int emp_id;
     char emp_name[10];
     float emp_salary;
 };
  
int main()
{
    struct  emp s1;
    cout<<"enter emp id:";
    cin>>s1.emp_id;

    cout<<"enter emp name:";
    cin>>s1.emp_name;

    cout<<"enter emp salary:";
    cin>>s1.emp_salary;

    cout<<" id is:"<<s1.emp_id;
    cout<<"\nname is:"<<s1.emp_name;
    cout<<"\n salary is:"<<s1.emp_salary;

    
}
 