//constructors
#include <iostream>
int main()
{
    class student
    {
        public:
        int id;
        std::string name;
        student()
        {
            int id;
            std::string name;
        }
        student(int i,std::string n)
        {
            id=i;
            name=n;
        }
    };      
    student s1(2,"Dhiraj Dada");
    student s2(1,"Dhiraj");     
    std::cout<<"Student 1: "<<s1.id<<" "<<s1.name<<std::endl;
    std::cout<<"Student 2: "<<s2.id<<" "<<s2.name<<std::endl;
    return 0;   
}