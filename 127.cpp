#include<iostream>
//base class
class animal
{
    private:
    std::string color;

    protected:
    std::string type;
    
    public:

    void eat(){
        std::cout<<"I'm eating"<<std::endl;

    }

    void run(){
        std::cout<<"I am running"<<std::endl;

    }

    void setcolor(std::string c){
        color=c;
    }

    std::string getcolor(){
        return color;
    }

};
//derived class
class dog:public animal
{
    public:
    void bark(){
        std::cout<<"I can bark woof! woof!"<<std::endl;

    }

    void settype(std::string tp)

    {
        type=tp;
    }

    void displayinformation(std::string colouuur){
        std::cout<<"My type is:"<<type<<std::endl;
        std::cout<<"My color is:"<<colouuur<<std::endl;
    }


};
int main()
{
    dog dog1;
    dog1.settype("German_Shepherd");
    dog1.setcolor("Black_and_Tan");
    dog1.displayinformation(dog1.getcolor());
    dog1.eat();
    dog1.run();
    dog1.bark();
    return 0;
}