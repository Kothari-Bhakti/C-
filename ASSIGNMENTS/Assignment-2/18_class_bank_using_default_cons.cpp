//Create a class BankAccount with data members: accountNumber, holderName, and balance.
//Use a default constructor to initialize default values.
//Display account details using a member function.


#include <iostream>
using namespace std;


class bank_accopunt
{
     public:

     int account_number;
     string holder_name;
     long int balance;

    bank_accopunt()
    {
        account_number=1010551090;
        holder_name="bhakti kothari";
        balance=1000000000;
    }

    void put()
    {
        cout<<"account number is:"<<account_number<<endl;
        cout<<"holder name is:"<<holder_name<<endl;
        cout<<"balance is:"<<balance<<endl;

    }
};
int main()
{
    bank_accopunt a;
    a.put();

    return 0;
}