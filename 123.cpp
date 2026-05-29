#include<iostream>
class shape{
    public:
    double area;
   double volume;
};
class cube: public shape{
    public:
    double side;
    cube (double side){
    this->side=side;
    this->area = side*side*6;
    this ->volume = side*side*side;
    }

};
class sphere: public shape{
    public:
    double radius;
    sphere(double radius){
        this ->radius = radius;
        this -> area = 4.0*3.14159*radius;
        this -> volume = (4/3.0)*3.14159*radius*radius*radius;

    }

};
int main() {
    cube Cube(10);
    std::cout<<"the total surface area of the cube is:"<<Cube.area<<std::endl;
    std::cout<<"the total volume of the cube is :"<<Cube.volume<<std::endl;
    sphere Sphere(7);
    std::cout<<"the total surface area of the given sphere with radius 7 is : "<<Sphere.area<<std::endl;
    std::cout<<"the total volume of the sphere with radius 7 is : " << Sphere.volume <<std::endl;
    return 0;
} 
