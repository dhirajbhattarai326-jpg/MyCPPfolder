#include<iostream>
using namespace std;
int main()
{
    int a = 10;
    int b = 20;
    const int *ptr=&a; // pointer to const int
    cout<<"value pointed by ptr:"<<*ptr<<endl; // Output: 10
    ptr=&b; // Allowed: we can change where ptr points
    cout<<"value pointed by ptr after changing pointer:"<<*ptr<<endl; // Output:

    //*ptr=30; // Not allowed: error, cannot modify the value through ptr
    return 0;
}