# include <iostream>
int main()
{
    std::string name;
    std::cout<<"enter your name "<<std::endl;
    std::getline(std::cin, name);
    if(name.length()>15)
    {
        std::cout<<"your name is too long "<<std::endl;
    }
    else
    {
        std::cout<<"welcome :"<<name<<std::endl;
    }
    name.append("@gmail.com");
    std::cout<<"your email is :"<<name<<std::endl;
    name.insert(0,"user_");
    std::cout<<"your email with username is :"<<name<<std::endl;
    return 0;
}