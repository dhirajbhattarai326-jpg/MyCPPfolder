#include<iostream>
using namespace std;
int main()
{
    string COUNTRY_1="Nepal";
    string COUNTRY_2="India";
    string *const ptr=&COUNTRY_1; // const pointer to string
    cout<<"country 1:"<<COUNTRY_1<<endl; // Output: Nepal
    // ptr=&COUNTRY_2; // Not allowed: error, cannot change where ptr points
    //CHANGING THE COUNTRY_1 VALUE
    *ptr=COUNTRY_2; // Allowed: we can change the value of COUNTRY_1 through ptr
    cout<<"country 1 after modification:"<<COUNTRY_1<<endl; // Output: India
    return 0;
}   