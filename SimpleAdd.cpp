#include <iostream>

int main(void)
{
    int val1;
    std::cout<<"first num: ";
    std::cin>>val1;

    int val2;
    std::cout<<"second num: ";
    std::cin>>val2;

    int result=val1+val2;
    std::cout<<"result: "<<result<<std::endl;
    return 0;
}