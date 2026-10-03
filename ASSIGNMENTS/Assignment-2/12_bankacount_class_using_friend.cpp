#include <iostream>
using namespace std;

class bank_acount
{

    private:

    int account_Number;
    int balance;

    friend void displaybalance();
};
 
 void displaybalance()
 {
    bank_acount obj;
    cout<<"ENTER YOUR ACCOUNT NUMBER:";
    cin>>obj.account_Number;
    cout<<"YOUR BALANCE IS:";
    cin>>obj.balance;

    cout<<"account number:"<<obj.account_Number<<endl;
    cout<<"balance:"<<obj.balance<<endl;
 }
 int main()
 {
    displaybalance();
    return 0;
 }