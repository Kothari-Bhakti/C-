#include <iostream>
#include <string.h>
using namespace std;

class employee
{
    public:
    char name[10];
    int salary;
    void putdata();
    void getdata( char name[10], int salary)
{
     cout<<"enter your name and salary:";
     cin>>name>>salary;

}
};
void employee::putdata()
{
     cout<<"***** employee detail*****"<<"\n\t";
     cout<<"name:"<<name<<"\n\t";
     cout<<"salary:"<<salary;
}



// int main()
// {
//     employee obj;
//     cout<<"enter name and salary:";
//     cin>>obj.name>>obj.salary;
//     obj.putdata();

//     return 0;
// }
int main()
{
   employee obj;
   char name[10];
   int salary;
    
    //     strcpy(obj.name,"bhakti");
   //obj.salary=50000;
   
   obj.getdata(name,salary);
   obj.putdata();
   return 0;

}