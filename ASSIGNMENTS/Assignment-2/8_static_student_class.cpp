#include <iostream>
using namespace std;
static int count=0;

class student
{
    int roll_num;
    string name;

    public:


    student()
    {
        count++;
        roll_num=66;
        name="bhakti";
        
        cout<<"student roll number is:"<<roll_num<<endl;
        cout<<"student name is:"<<name<<endl;

        cout<<"objects created "<<count<<"times"<<endl;
        
    }

};

int main()
{
    student s1;
    student s2;
}
