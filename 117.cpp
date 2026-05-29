//passing array to a function
#include<iostream>
double summ(double arra[]);
int main()
{
    double arra[]={1.5,2.5,3.5,4.5,5.5};
    double result=summ(arra);
    std::cout<<"The sum of the array is: "<<result<<std::endl;
    return 0;
}
double summ(double arra[])
{
    double sum=0.0;
    for(int i=0;i<5;i++)
    {
        sum+=arra[i];
    }
    return sum;
}