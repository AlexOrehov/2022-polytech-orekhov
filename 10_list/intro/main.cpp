#include <iostream>
#include"list.h"

int main()
{
    {
        List list_one;
        list_one.push_back(5);
        list_one.push_back(122);
        list_one.push_back(1234);
        list_one.show();

        std::cout << "------------------------------" << std::endl;
        List list_two(list_one);
        list_two.show(); //suspicion of the copy constructor
        std::cout << "------------------------------" << std::endl;
    }
    return 0;
}