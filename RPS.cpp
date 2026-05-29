//rock paper scissors game using functions 
#include <iostream>
#include<ctime>
#include<cstdlib>
char getuserchoice();
char getcomputerchoice();
void displaychoice(char ,char);
void determinewinner(char userchoice,char computerchoice);
int main()
{
    char userchoice=getuserchoice();
    char computerchoice=getcomputerchoice();
    displaychoice(userchoice, computerchoice);
    determinewinner(userchoice, computerchoice);
    return 0;
}
char getuserchoice()
{
    char choice;
    do
    {
    
    std::cout<<"Enter your choice (R for Rock, P for Paper, S for Scissors): ";
    std::cin>>choice;
    } while(choice!='R' && choice!='P' && choice!='S');
    return choice;
}
char getcomputerchoice()
{
    srand(time(0));
    int randomnum=rand()%3;
    if(randomnum==0)
        return 'R';
    else if(randomnum==1)
        return 'P';
    else
        return 'S';
}
void displaychoice(char userchoice,char computerchoice)
{
    std::cout<<"You chose: "<<userchoice<<std::endl;
    std::cout<<"Computer chose: "<<computerchoice<<std::endl;
}
void determinewinner(char userchoice,char computerchoice)
{
    switch(userchoice)
    {
        case 'R':
            if(computerchoice=='R')
                std::cout<<"It's a tie!"<<std::endl;
            else if(computerchoice=='P')
                std::cout<<"Computer wins!"<<std::endl;
            else
                std::cout<<"You win!"<<std::endl;
            break;
        case 'P':
            if(computerchoice=='R')
                std::cout<<"You win!"<<std::endl;
            else if(computerchoice=='P')
                std::cout<<"It's a tie!"<<std::endl;
            else
                std::cout<<"Computer wins!"<<std::endl;
            break;
        case 'S':
            if(computerchoice=='R')
                std::cout<<"Computer wins!"<<std::endl;
            else if(computerchoice=='P')
                std::cout<<"You win!"<<std::endl;
            else
                std::cout<<"It's a tie!"<<std::endl;
            break;
        default:
            std::cout<<"Invalid choice! Please choose R, P, or S."<<std::endl;
    }
}