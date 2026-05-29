#include<iostream>
#include<set>
int main()
{
    std::set<int> myset{4,2,4,3,1,100,56};
    std::cout<<"elements in the set are:"<<std::endl;
    for(const auto &myset_element:myset)
    {
        std::cout<<myset_element<<"  ";
    }
    return 0;

}