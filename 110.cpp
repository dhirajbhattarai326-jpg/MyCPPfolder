#include<iostream>
int main()
{
    int temperature;
    std::cout<<"enter the temperature in degree celsius "<<std::endl;
    std::cin>>temperature;
    bool temp=temperature>30;
    if(temp)
    {
        std::cout<<"it is hot outside"<<std::endl;
    }
    else
    {
        std::cout<<"it is not hot outside"<<std::endl;
    }
    return 0;
}