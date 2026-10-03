#include  <iostream>
using namespace std;

class student
{
    private:
    string name;
    int marks[3];
    float total=0;
    public:

    void getdata()
    {
        cout<<"ENTER YOUR NAME:";
        cin>>name;
        for (int i = 0; i <3; i++)
        {
             cout<<" ENTER MARKS FOR SUB"<<i+1<<":";
             cin>>marks[i];
        }
    }

    float calculateAverage()
    {
        
        total=marks[0]+marks[1]+marks[2];
        float avg=total/3;
         cout<<"total of marks:"<<total<<endl;
         return avg;
    }
        
        

    void display()
    {
        cout<<"student name is:"<<name<<endl;
        for (int  i = 0; i<3; i++)
        {
            cout<<"marks of sub"<<i+1<<":"<<marks[i]<<endl;
        }
        cout<<"total of marks:"<<total<<endl;
        cout<<"average of marks:"<<calculateAverage();
        
    }
};

int main()
{
    student obj;
    obj.getdata();
    // obj.calculateAverage();
    obj.display();
}