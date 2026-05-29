//program to check wheather the given age is eligible for voting or not using function of return type
#include<iostream>
bool isEligibleToVote(int age)
{
    if(age>=18)
        return true;
    else
        return false;
}   
int main()
{
    int age;
    std::cout<<"Enter your age: ";
    std::cin>>age;
    if(isEligibleToVote(age))
        std::cout<<"You are eligible to vote."<<std::endl;
    else
        std::cout<<"You are not eligible to vote."<<std::endl;
    return 0;
}