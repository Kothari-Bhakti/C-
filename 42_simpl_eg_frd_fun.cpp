#include <iostream>
using namespace std;

class employee
{
    private:
    friend void sal();
};
void sal()
{
     char name[10]="bhakti";
     string designation =" web developer";
     int  salary=1000000;

     cout<<"name:"<<name;
     cout<<"\ndesignation:"<<designation;
     cout<<"\nsalary:"<<salary;
}
int main()
{
    sal();
    return 0;
}