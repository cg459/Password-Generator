#include<iostream>
#include<stdlib.h>
#include<string>

bool test (bool &b);

int main(void)
{
    
    bool my_dict[4] = {false, false, false, false};
    std::cout <<my_dict[0]<< std::endl;
    std::cout <<my_dict[1]<< std::endl;
    std::cout <<my_dict[2]<< std::endl;
    std::cout <<my_dict[3]<< std::endl;
    test(my_dict[0]);
    test(my_dict[2]);
    std::cout <<my_dict[0]<< std::endl;
    std::cout <<my_dict[1]<< std::endl;
    std::cout <<my_dict[2]<< std::endl;
    std::cout <<my_dict[3]<< std::endl;
}

bool test (bool &b){
    b=true;
    return true;
}

