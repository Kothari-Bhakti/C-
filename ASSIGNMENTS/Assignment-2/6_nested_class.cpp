#include <iostream>
using namespace std;

class bank
{
    private:
    int account_num;
    string customer_name;
    public:
      void get()
      {
        cout<<"enter customer acount number:";cin>>account_num;
        cout<<"enter customer name:";cin>>customer_name;
      }
       void put()
       {
        cout<<"account number:"<<account_num;
        cout<<"customer name:"<<customer_name;
       }
  class  Locker
  {
    private:
    int Locker_number;
    int access_key;
     public:
    void getval()
    {
      cout<<"enter your locker number";cin>>Locker_number;
      cout<<"enter your access_key";cin>>access_key;
    }

    void putval()
    {
      cout<<"your locker  number is:"<<Locker_number;
      cout<<"yourn access key is:"<<access_key;

    }
  };

};
int main()
{
 bank::Locker obj;
 bank b1;
 b1.get();  // input function call
 obj.getval();

 b1.put();//  output function call
 obj.putval();
 


}