#include<iostream>
#include<ctime>
#include<cstdlib>
int main()
{
    srand(time(NULL));
    int random_number=(rand()%6)+1;
    switch(random_number)

    {
        case 1:
            std::cout<<"you win a BUMPER STICKER  "<<std::endl;
            break;
        case 2:
            std::cout<<"you WON A T_SHIRT  "<<std::endl;
            break;
        case 3:
            std::cout<<"you WON A HOODIE  "<<std::endl;
            break;
        case 4:
            std::cout<<"you WON A KEYCHAIN  "<<std::endl;
            break;
        case 5:
            std::cout<<"you WON A BOOK  "<<std::endl;
            break;
        case 6:
            std::cout<<"you WON A TOY  "<<std::endl;
            break;
    }
        return 0;
}
