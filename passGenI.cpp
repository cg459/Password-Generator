#include<iostream>
#include<stdlib.h>
#include<string>
#include <map>
#include "pass.cpp"

void gen3(pass &a, int b);
bool inputCheck (std::string a, bool &b);
bool my_dict[4] = {false, false, false, false};//number, lower, upper, symbol;
int falseCheck;

int main(void)
{
    srand (time(NULL));
    int firstArg, secondArg;
    std::string firstArgString, secondArgString, lowerIn, upperIn, symbolIn, numberIn;
    bool justNum = false, boolExpr = true, check = true;
    do{
        std::cout <<"How many passwords would you like?" << std::endl;
        std::cin >> firstArgString;
        try{
            firstArg = std::stoi(firstArgString);
            if (firstArg==0)
                return 0;
        }catch( const std::exception) {
            std::cout <<"Please enter a number" << std::endl;
            continue;
        }
        boolExpr = false;
    }while(boolExpr);
    boolExpr = true;
    do{
        std::cout <<"How long do you want to passwords to be?" << std::endl;
        std::cin >> secondArgString;
        try{
            secondArg = std::stoi(secondArgString);
        }catch( const std::exception) {
            std::cout <<"Please enter a number" << std::endl;
            continue;
        }
        boolExpr = false;
    }while(boolExpr);
    while(check && secondArg !=0)
    {
        std::cout <<"Would you like numbers in your password? Y|N"<< std::endl;
        std::cin >> numberIn;
        if(inputCheck(numberIn, my_dict[0]) == true)
            break;
    }
    while(check&& secondArg !=0){
        std::cout <<"Would you like lowercase letters in your password? Y|N"<< std::endl;
        std::cin >> lowerIn;
        if(inputCheck(lowerIn, my_dict[1]) == true)
            break;
    }
    while(check&& secondArg !=0){
        std::cout <<"Would you like uppercase letters in your password? Y|N"<< std::endl;
        std::cin >> upperIn;
        if(inputCheck(upperIn, my_dict[2]) == true)
            break;
    }    
    while(check&& secondArg !=0){
        std::cout <<"Would you like symbols in your password? Y|N"<< std::endl;
        std::cin >> symbolIn;
        if(inputCheck(symbolIn, my_dict[3]) == true)
            break;
    }
    if(falseCheck==4)
        std::cout <<"looks like you do not want any passwords"<< std::endl;
    else{
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

bool inputCheck (std::string a, bool &b){
    if(a.compare("Y") == 0 || a.compare("y") == 0)
    {  
        b = true;
        return true;
    }else if(a.compare("N") == 0 || a.compare("n") == 0){
        b=false;
        falseCheck++;
        return true;
    }else{
        std::cout<<"Please enter Y for Yes or N for No"<<std::endl;
        return false;
    }
}

void gen3(pass &a, int b){
    int randNum, counter=0;
    while(counter!=b){
        randNum=rand() % 4;
        if(my_dict[randNum]==false)
            continue;
        else{
            if(randNum==0)
                a.addNum();
            else if(randNum==1)
                a.addLower();
            else if(randNum==2)
                a.addUpper();
            else if(randNum==3)
                a.addSpecial();
        }
        counter++;
    }
}