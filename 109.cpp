#include<iostream>
int main()
{
    char op;
    double num1,num2,result;
    std::cout<<"**********CALCULATOR**********"<<std::endl;
    std::cout<<"enter first number "<<std::endl;
    std::cin>>num1;
    std::cout<<"enter an operator (+, -, *, /) "<<std::endl;
    std::cin>>op;
    std::cout<<"enter second number "<<std::endl;
    std::cin>>num2;
    switch(op)
    {
        case '+':
            result=num1+num2;
            std::cout<<"result: "<<result<<std::endl;
            break;
        case '-':
            result=num1-num2;
            std::cout<<"result: "<<result<<std::endl;
            break;
        case '*':
            result=num1*num2;
            std::cout<<"result: "<<result<<std::endl;
            break;
        case '/':
            result=num1/num2;
            std::cout<<"result: "<<result<<std::endl;
            break;
        default:
            std::cout<<"invalid operator"<<std::endl;
    }
    return 0;
}