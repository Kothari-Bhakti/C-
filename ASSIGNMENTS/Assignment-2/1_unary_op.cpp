//Write a C++ program to create a class Number that stores an integer value. 
//Overload the following operators:
// Unary - operator to negate the value of a number (i.e., change sign).
//Define appropriate member functions and use the overloaded operators in main() to
//demonstrate the functionality.

#include <iostream>
using namespace std;

class number
{  
    int x;
    public:

    number(int a=0)
    {
        x=a;
    }
    number operator-()
    {
        return number(-x);
    }

    void display()
    {
        cout<<"value:"<<x<<endl;
    }
};
int main()
{
    number n1(10);
    cout<<"before applying unary minus:"<<endl;
    n1.display();

    number n2=-n1;//class overloded operator
    cout<<"after applying unary  minus operator:"<<endl;

    n2.display();
    
    return 0;
}





