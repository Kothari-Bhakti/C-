#include <iostream>
using namespace std;
 
 struct product
 {
    int pro_id;
    char pro_name[10];
    int pro_quantity;
    int pro_price;

 };

 int main()
 {
    struct  product p1;

    cout<<"enter product id:";
    cin>>p1.pro_id;

    cout<<"enter product name:";
    cin>>p1.pro_name;

    cout<<"enter product quantity:";
    cin>>p1.pro_quantity;

    cout<<"enter product price:";
    cin>>p1.pro_price;

    int total_cost=p1.pro_price*p1.pro_quantity;
    
    cout<<"\nproduct id:"<<p1.pro_id;
    cout<<"\nproduct name:"<<p1.pro_name;
    cout<<"\nproduct quantity:"<<p1.pro_quantity;
    cout<<"\nproduct price:"<<p1.pro_price;

    cout<<"\ntotal cost is:"<<total_cost;
    
    return 0;
    
 }