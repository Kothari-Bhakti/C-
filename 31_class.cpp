#include <iostream>
#include <iomanip>
using namespace std;

class student // class name student 
{
    int  roll_num;
    int cpp,coa,dbms;
    string name;

    public:

    void getdata()// getdata function used to get value
    {
        cout<<"enter your roll number:";
        cin>>roll_num;// 66
        cout<<"enter name:";
        cin>>name;//bhakti
        cout<<"enter marks of cpp , coa , dbms:";
        cin>>cpp>>coa>>dbms;// 90 90 78

    }

    void putdata()
    {
        cout<<"***** student detail*****\n\t";
        cout<<"roll num :"<<roll_num<<"\n\t";
        cout<<"name:"<<name<<"\n\t";
        cout<<"cpp:"<<cpp<<"\n\t";
        cout<<"coa:"<<coa<<"\n\t";
        cout<<"dbms:"<<dbms<<"\n\t";
        float total=cpp+coa+dbms;
        float per= (total)/3;
        cout<<"total:"<<total<<"\n\t";
        cout<<"percentage:"<<setprecision(4)<<per<<"%"<<"\n\t";// set precision are used to print value after decimal

    }
};
int main()
{
    student obj;// obj object of class student
     obj. getdata();
     obj.putdata();

     return 0;

}
