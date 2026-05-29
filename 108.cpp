#include<iostream>
int main()
{
    char grade;
    std::cout<<"enter your grade "<<std::endl;
    std::cin>>grade;
    switch (grade)
    {case 'A':
        std::cout<<"excellent "<<std::endl;
        break;
    case 'B':
        std::cout<<"good "<<std::endl;
        break;
    case 'C':
        std::cout<<"average "<<std::endl;
        break;
    default:
        std::cout<<"invalid grade "<<std::endl;
    }
    return 0;
}