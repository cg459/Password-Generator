#include<iostream>
#include<stdlib.h>
#include<string>
#include "pass.cpp"

void gen3(pass &a, int b);

int main(int argc, char *argv[])
{
    int firstArg, secondArg;
    bool secondCheck = false;
    srand (time(NULL));
    if(argc == 1)
    {
        firstArg=5;
        secondArg=10;
    }else if(argc == 2){
        try{
            firstArg = std::stoi(argv[1]);
            secondArg=10;
        }catch( const std::exception) {
                std::cout << "VALUE NOT INTEGER "<< std::endl;
                return 0;
        }
    }else if(argc == 3)
    {
        secondCheck=true;
        try{
            firstArg = std::stoi(argv[1]);
            secondArg = std::stoi(argv[2]);
        }catch( const std::exception) {
            std::cout << "VALUE NOT INTEGER "<< std::endl;
            return 0;
        }
    }
    for(int i = 0; i < firstArg; i++){
        pass a;
        gen3(a, secondArg);
        std::cout<<"OPTION " << i<< ": ";
        a.printcap();
        std::cout<<std::endl<<std::endl;
    }
}

void gen3(pass &a, int b){
    int randNum, counter=0;
    for(int i=0; i < b; i++){
        randNum=rand() % 4;
        if(randNum==0)
            a.addNum();
        else if(randNum==1)
            a.addLower();
        else if(randNum==2)
            a.addUpper();
        else if(randNum==3)
            a.addSpecial();
    }
}

