#include <iostream>

int main()
{
    int n;
    std::cout<<"enter your number:";
    std::cin>>n;
    if(n/2==0)
    std::cout<<n<<" is even number";
    else
    std::cout<<n<<" is odd number";
    return 0;
}