#include<iostream>
#include<stdlib.h>
#include<string>

bool test (bool &b);

int main(void)
{
    
    bool my_dict[4] = {false, false, false, false};
    std::cout<< std::endl<<std::endl;

}

bool test (bool &b){
    b=true;
    return true;
}

