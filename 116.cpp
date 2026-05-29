#include<iostream>
int main()
{
    std::string name[]={"Alice","Bob","Charlie"};
    for(std::string name : name)
    {
        std::cout<<name<<std::endl;
    }
    return 0;
}