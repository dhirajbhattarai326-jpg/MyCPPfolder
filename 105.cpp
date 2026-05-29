#include<iostream>
int main()
{
    std::string name;
    int age;
    
    std::cout<<"Hello bro ! please enter your name and age "<<std::endl;
    std::getline(std::cin, name);
    std::cin >> age;
    std::cin.ignore(); // To ignore the newline character left in the buffer
     
    std::cout<<"your name is :" << name << " and your age is: " << age << std::endl;
    return 0;                   
}