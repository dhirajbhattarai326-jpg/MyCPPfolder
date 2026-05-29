#include<iostream>
int main()
{
    std::string name_of_foods[10];
    std::string temp;
    double size=sizeof(name_of_foods)/sizeof(name_of_foods[0]);
    std::cout<<"enter your favourite foods:and enter quit to stop"<<std::endl;
    for(int i=0;i<size;i++)
    {
        std::getline(std::cin,temp);
        if(temp=="quit")
        {
            break;
        }
        name_of_foods[i]=temp;
    }
    std::cout<<"your favourite foods are: "<<std::endl;
    for(int i=0;!name_of_foods[i].empty();i++)
    {
        std::cout<<i+1<<" "<<name_of_foods[i]<<std::endl;
    }
}