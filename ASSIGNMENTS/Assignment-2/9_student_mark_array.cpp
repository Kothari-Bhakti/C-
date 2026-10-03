#include <iostream>
using namespace std;

class student
{
  public:

   string name;
   int marks[5];
  
  void input()
  {
    cout<<"enter student name:";
    cin>>name;
    for (int i = 0; i <5; i++)
    {
       cout<<"enter marks for sub "<<i+1<<":";
       cin>>marks[i];
    }
  }
 

 void put()
 {
  cout<<" student name is:"<<name<<endl;
   for (int  i = 0; i <5; i++)
   {
     cout<<" marks of subject"<<i+1<<":"<<marks[i]<<endl;
   }
   
 }

};
int main()
{
  student obj;
  obj.input();
  obj.put();


  return 0;
}