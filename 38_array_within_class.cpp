#include <iostream>
using namespace std;

// class student 
// {
//     private:

//          int marks[5];//array to store 5 sub marks

//     public:

//     // function to input marks
//     void inputmarks()
//     {
//         cout<<"enter marks for 5 subject:";
//         for (int i = 0; i <5; i++)
//           {
//                cin>>marks[i];
//           }
//     }

//     //function to display marks
//      void display()
//     {
//             for (int i = 0; i < 5; i++)
//             {
//                 cout<<marks[i]<<" ";
//             }        
//     }    
// };
// int main()
// {
//     student obj;

//     obj.inputmarks();
//     obj.display();

//     return 0;
// }
class student
{
    public:
    int roll_num[3];
    char name[3][10];
    int marks[3][3];
    float total[3];
     void get()
     {
      for (int i = 0; i < 3; i++)
      {
         cout<<"\n***enter details for student***";
         cout<<"\nenter roll number:";
         cin>>roll_num[i];
         cout<<"\nenter name:";
         cin>>name[i]; 
      for (int j = 0; j<3; j++)
      {
           cout<<"\nenter marks for sub:";
           cin>>marks[i][j];
           total[i]=total[i]+marks[i][j];
      }
      }
     }
      void put()
     {
      for (int i = 0; i < 3; i++)
      {
      
         cout<<"\n\n**student detail**";
         cout<<"\nroll no:"<<roll_num[i];
         cout<<"\nname:"<<name[i];
         cout<<"\ntotal is:"<<total[i];

      }
     }
};
int main()
{
   student obj;
   obj.get();
   obj.put();

   return 0;
}