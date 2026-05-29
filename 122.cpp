//inheritance
#include<iostream>
class animal{
    public :
    bool alive = true;
    void eat(){
        std::cout<<"The dog is eating"<<std::endl;
    }

    };
    class Dog : public animal {
        public:
        void bark()
        {
            std::cout<<"the dog is barking"<<std::endl;
        }

    };
    class Cat: public animal{
        public:
        void meow()
        {
            std::cout<<"the cat is meowing"<<std::endl;

        }
    };
int main()
{
    Dog dog;
    Cat cat;
    std::cout<<dog.alive<<std::endl;
    dog.eat();  
    cat.eat();
    dog.bark();
    cat.meow();
    std::cout<<cat.alive<<std::endl;
    return 0;
}