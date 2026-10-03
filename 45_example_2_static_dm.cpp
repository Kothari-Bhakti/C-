#include <iostream>
using namespace std;

class student
{
    public:
    static int totalstudents;
    void showcount()
    {
        totalstudents ++;
        cout<<"total student:"<<totalstudents<<endl;

    }
};
// definition of static data member outside the class

int student::totalstudents=0;

int main()
{
    student s1;
     s1.showcount();// output:total student 1
     s1.showcount();// output:total student 2
     s1.showcount();// output:total student 3

     return 0;

}
