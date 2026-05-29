#include<iostream>
#include<cstdlib>
#include<ctime>
int main()
{
    srand(time(NULL));
    int random_number1=(rand()%6)+1;
    std::cout<<"First random number for dice is: "<<random_number1<<std::endl;
    int random_number2=(rand()%6)+1;
    std::cout<<"Second random number for dice is: "<<random_number2<<std::endl;
    int random_number3=(rand()%6)+1;
    std::cout<<"Third random number for dice is: "<<random_number3<<std::endl;
    return 0;
}