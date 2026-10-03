#include <iostream>

int main()
{
    int p,n; float r;
    std::cout<<"enter value for p";//principle amount
    std::cin>>p;

    std::cout<<"enter value for r";//rate of interest
    std::cin>>r;

    std::cout<<"enter value for n";//number of years
    std::cin>>n;

    std::cout<<"the simple interest is:"<<p*r*n/100;  //ans
    return 0;
    
}