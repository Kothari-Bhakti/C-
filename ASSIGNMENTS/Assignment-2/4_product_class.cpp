#include <iostream>
using namespace std;

class product
{
    public:
    
     int product_id;
     string product_name;
     int product_Quantity;
     int product_price;

     void getvalue()
     {
        cout<<"enter product id:";cin>>product_id;
        cout<<"enter product name:";cin>>product_name;
        cout<<"enter product  Quantity:";cin>>product_Quantity;
        cout<<"enter product price:";cin>>product_price;
     }

     void putdetail()
     {
         cout<<"*** product detail***"<<endl;
         cout<<"product id:"<<product_id<<endl;
         cout<<"product name:"<<product_name<<endl;
         cout<<"product Quantity:"<<product_Quantity<<endl;
         cout<<"product price:"<<product_price<<endl;

     }

};
int main()
{
    product  obj;
    obj.getvalue();
    obj.putdetail();

    return 0;
}
