#include<iostream>
#include<stdlib.h>
#include<string>
#include "pass.cpp"

void gen2(pass &a);
void gen3(pass &a, int b);

int main(int argc, char *argv[])
{
    int firstArg;
    int secondArg;
    srand (time(NULL));
    bool justNum = false;
    if(argc == 1)
    {
        for(int i = 0; i < 5; i++){
            pass a;
            gen2(a);
            std::cout<<"OPTION " << i<< ": ";
            a.printcap();
            std::cout<< std::endl;
            std::cout<< std::endl;
        }
    }
    
    if(argc == 2 )
    {
        try{
                firstArg = std::stoi(argv[1]);
        }catch( const std::exception) {
                std::cout << "VALUE NOT INTEGER "<< std::endl;
                return 0;
        }
        for(int i = 0; i < firstArg; i++){
            pass a;
            gen2(a);
            std::cout<<"OPTION " << i<< ": ";
            a.printcap();
            std::cout<< std::endl;
            std::cout<< std::endl;
        }
    }

    if(argc == 3)
    {
        try{
                firstArg = std::stoi(argv[1]);
                secondArg = std::stoi(argv[2]);
        }catch( const std::exception) {
                std::cout << "VALUE NOT INTEGER "<< std::endl;
                return 0;
        }
        for(int i = 0; i < firstArg; i++){
            pass a;
            gen3(a, secondArg);
            std::cout<<"OPTION " << i<< ": ";
            a.printcap();
            std::cout<< std::endl;
            std::cout<< std::endl;
        }
    }
}

void gen2(pass &a){
        int fuck;
        for(int i = 0; i < 15; i++)
        {
            fuck = rand()% 4;
            if(fuck == 0)
            {
                a.addNum();
            }
            else if(fuck == 1)
            {
                a.addcap();
            }
            else if(fuck == 2)
            {
                a.addlower();
            }
            else if(fuck == 3)
            {
                a.addspecial();       
            }
        }   
}


void gen3(pass &a, int b){
        int fuck;
        for(int i = 0; i < b; i++)
        {
            fuck = rand()% 4;
            if(fuck == 0)
            {
                a.addNum();
            }
            else if(fuck == 1)
            {
                a.addcap();
            }
            else if(fuck == 2)
            {
                a.addlower();
            }
            else if(fuck == 3)
            {
                a.addspecial();       
            }
        }   
}


