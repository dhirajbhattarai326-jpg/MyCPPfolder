#include<iostream>
int main()
{
    std::string name[100];
    const int size=100;
    int i=1;
    fill(name,name+(size/4),"DHIRAJ_DADA");
    fill(name+(size/4),name+(size/2),"MAHARAJA_DHIRAAAJ");
    fill(name+(size/2),name+(3*size/4),"SHREE PANCH DHIRAJ");
    fill(name+(3*size/4),name+size,"DHIRAJ THE GREAT");
    for(std::string name : name)
    {
        std::cout<<i<<" "<<name<<std::endl;
        i++;
    }
}