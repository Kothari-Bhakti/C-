#include <iostream>
using namespace std;

struct  student
{
    int roll_num;
    char name[10];
    int html,c,java;

};
int main()
{
    struct student st;
    
    cout<<"enter roll number:";
    cin>>st.roll_num;

    cout<<" enter name:";
    cin>>st.name;

    cout<<"enter marks for html:";
    cin>>st.html;

    cout<<"enter marks for c:";
    cin>>st.c;

    cout<<"enter marks for java:";
    cin>>st.java;
    
    int total=st.html+st.c+st.java;
    cout<<" total is:"<<total;
    float per= (total/300.0)*100.0;
    
    cout<<"\n per is:"<<per;


    
}
