//program to concatenate two strings using function of return type
#include<iostream>
#include<string>
std::string concatenate(std::string str1,std::string str2)
{
    return str1+" "+str2;
}
int main()
{
    std::string s1="Dhiraj ";
    std::string s2="Bhattarai";
    std::string result=concatenate(s1,s2);
    std::cout<<"Hello, "<<result<<std::endl;
    return 0;
}