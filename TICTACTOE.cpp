// TIC TAC TOE GAME
#include <iostream>
#include<ctime>
void drawboard (char *spaces);
void player_move(char *spaces , char player__move);
void computer_move(char *spaces , char computer__move);
bool checkwinner(char *spaces ,char player__move ,char computer__move);
bool check_tie(char *spaces);
int main()
{
    char spaces[9]={' ',' ',' ',' ',' ',' ',' ',' ',' '};
    char player__move='X';
    char computer__move='O';
    std::cout<<"Welcome to Tic Tac Toe Game!"<<std::endl;
    std::cout<<"You are playing as X and the computer is playing as O."<<std::endl;
    std::cout<<"The board is numbered as follows:"<<std::endl;
    std::cout<<" 1 | 2 | 3 "<<std::endl;
    std::cout<<"-----------"<<std::endl;
    std::cout<<" 4 | 5 | 6 "<<std::endl;
    std::cout<<"-----------"<<std::endl;
    std::cout<<" 7 | 8 | 9 "<<std::endl;
     drawboard(spaces);
     bool running=true;
     while(running)
        {
            player_move(spaces , player__move);
drawboard(spaces);
            if(checkwinner(spaces , player__move , computer__move))
            {
                running=false;
                break;
            }
            else if(check_tie(spaces))
            {
                running=false;
                break;
            }


            computer_move(spaces , computer__move);
        drawboard(spaces);
        if(checkwinner(spaces , player__move , computer__move))
            {
                running=false;
                break;
            }
            else if(check_tie(spaces))
            {
                running=false;
                break;
            }
        }
        
    return 0;
}

void drawboard (char *spaces)
{
    std::cout<<std::endl;
    std::cout<<" "<<spaces[0]<<" | "<<spaces[1]<<" | "<<spaces[2]<<" "<<std::endl;
    std::cout<<"-----------"<<std::endl;
    std::cout<<" "<<spaces[3]<<" | "<<spaces[4]<<" | "<<spaces[5]<<" "<<std::endl;
    std::cout<<"-----------"<<std::endl;
    std::cout<<" "<<spaces[6]<<" | "<<spaces[7]<<" | "<<spaces[8]<<" "<<std::endl;
    std::cout<<std::endl;
}
void player_move(char *spaces , char player__move)
{
    int move;
    std::cout<<"Enter your move (1-9): ";
    std::cin>>move;
    if(move<1 || move>9 || spaces[move-1]!=' ')
    {
        std::cout<<"Invalid move! Try again."<<std::endl;
        player_move(spaces , player__move);
    }
    else
    {
        spaces[move-1]=player__move;
        drawboard(spaces);
    }
}
void computer_move(char *spaces , char computer__move)
{
    srand(time(0));
    int move;
    do
    {
        move=rand()%9;
    }while(spaces[move]!=' ');
    spaces[move]=computer__move;
}   
bool checkwinner(char *spaces ,char player__move ,char computer__move)

{
    //checking rows
    if((spaces[0]!=' ')&&(spaces[0]==spaces[1])&&(spaces[1]==spaces[2]))
    {
        spaces[0]==player__move? std::cout<<"Congratulations! You win!"<<std::endl : std::cout<<"Computer wins! Better luck next time."<<std::endl;
    }
    else if((spaces[3]!=' ')&&(spaces[3]==spaces[4])&&(spaces[4]==spaces[5]))
    {
        spaces[3]==player__move? std::cout<<"Congratulations! You win!"<<std::endl : std::cout<<"Computer wins! Better luck next time."<<std::endl;
    }
    else if((spaces[6]!=' ')&&(spaces[6]==spaces[7])&&(spaces[7]==spaces[8]))
    {
        spaces[6]==player__move? std::cout<<"Congratulations! You win!"<<std::endl : std::cout<<"Computer wins! Better luck next time."<<std::endl;
    }
    //checking columns
    else if((spaces[0]!=' ')&&(spaces[0]==spaces[3])&&(spaces[3]==spaces[6]))
    {
        spaces[0]==player__move? std::cout<<"Congratulations! You win!"<<std::endl : std::cout<<"Computer wins! Better luck next time."<<std::endl;
    }
    else if((spaces[1]!=' ')&&(spaces[1]==spaces[4])&&(spaces[4]==spaces[7]))
    {
        spaces[1]==player__move? std::cout<<"Congratulations! You win!"<<std::endl : std::cout<<"Computer wins! Better luck next time."<<std::endl;
    }
    else if((spaces[2]!=' ')&&(spaces[2]==spaces[5])&&(spaces[5]==spaces[8]))
    {
        spaces[2]==player__move? std::cout<<"Congratulations! You win!"<<std::endl : std::cout<<"Computer wins! Better luck next time."<<std::endl;
    }

    //checking main diagonal
    else if((spaces[0]!=' ')&&(spaces[0]==spaces[4])&&(spaces[4]==spaces[8]))
    {
        spaces[0]==player__move? std::cout<<"Congratulations! You win!"<<std::endl : std::cout<<"Computer wins! Better luck next time."<<std::endl;
    }
    //checking anti diagonal
    else if((spaces[2]!=' ')&&(spaces[2]==spaces[4])&&(spaces[4]==spaces[6]))
    {
        spaces[2]==player__move? std::cout<<"Congratulations! You win!"<<std::endl : std::cout<<"Computer wins! Better luck next time."<<std::endl;
    }
    else
    {
        return false;
    }
    return true;
}
bool check_tie(char *spaces)
{
    for(int i=0;i<9;i++)
    {
        if(spaces[i]==' ')
        {
            return false;
        }
    }
    std::cout<<"It's a tie! No one wins."<<std::endl;
    return true;
}