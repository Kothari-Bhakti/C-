#include <iostream>

int main()
{
    int a,b;
    std::cout<<"enter  value:";
    std::cin>>a;

    std::cout<<"enter value:";
    std::cin>>b;
    if(b==0) 
    std::cout<<"divison by zero is not posible";
   
    else
    std::cout<<"division is:"<<a/b;
    return 0;
}