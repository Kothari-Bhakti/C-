#include <iostream>
using namespace std;

class student 
{
    public:

     int roll_num;
     string name;
     int oracl,cpp,maths;

     void getdata()
     {
        cout<<"enter roll num :";
        cin>>roll_num;
        cout<<"enter name:";
        cin>>name;
        cout<<"enter marks of 3 sub:";
        cin>>oracl>>cpp>>maths;
     }

     void putdata()
     {
        cout<<"student detail\n\t";
        cout<<"roll num:"<<roll_num<<"\n\t";
        cout<<"name:"<<name<<"\n\t";
        cout<<"oracl:"<<oracl<<"\n\t";
        cout<<"cpp:"<<cpp<<"\n\t";
        cout<<"maths:"<<maths<<"\n\t";
     }
};
int main()
{
    student obj;// obj student class
    obj.getdata();
    obj.putdata();
    return 0;
}