#include<iostream>
#include<algorithm>
#include<cmath>
int main()
{
    double num1,num2;
    std::cout<<"Enter two numbers "<<std::endl;
    std::cin>>num1>>num2;
    std::cout<<"greater among the two is :"<<std::endl;
    double greater=std::max(num1,num2);
    std::cout<<greater<<std::endl;
    std::cout<<"smaller among the two is :"<<std::endl;
    double smaller=std::min(num1,num2);
    std::cout<<"the smaller number is :"<<smaller<<std::endl;
    std::cout<<"the absolute value of the difference between the two numbers is :"<<std::endl;
    double abs_diff=std::abs(num1-num2);
    std::cout<<abs_diff<<std::endl;
    std::cout<<"the power of the greater number raised to the smaller number is :"<<std::endl;
    double power=std::pow(greater,smaller);
    std::cout<<power<<std::endl;
    std::cout<<"the square root of the greater number is :"<<std::endl;
    double sqrt_greater=std::sqrt(greater);
    std::cout<<sqrt_greater<<std::endl;
    return 0;
}