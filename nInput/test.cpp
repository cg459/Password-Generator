#include<iostream>
#include <stdlib.h>
int main()
{
    int fuck;
    srand (time(NULL));
    for(int i = 0; i < 5; i++)
    {
            fuck = rand() % 15+33; 
            std::cout<<fuck<<std::endl;
    }

    std::cout<<"end"<<std::endl;

    for(int i = 0; i < 5; i++)
    {
        fuck = rand() % 15+33; 
        std::cout<<fuck<<std::endl;
    }
}