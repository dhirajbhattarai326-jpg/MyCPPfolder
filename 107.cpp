#include<iostream>
#include<algorithm>
#include<cmath>
int main()
{
    double a,b,c;
    std::cout<<"enter the perpendicular and base of the right angled triangle"<<std::endl;
    std::cin>>a>>b;
    std::cout<<"the hypotenuse of the right angled triangle usign formula is :"<<std::endl;
    c=std::sqrt(a*a+b*b);
    std::cout<<c<<std::endl;
    std::cout<<"the hypotenuse of the right angled triangle using hypotenuse function is:"<<std::endl;
    double hypotenuse=std::hypot(a,b);
    std::cout<<hypotenuse<<std::endl;
    return 0;
}