#include<iostream>
#include <stdlib.h>
#include <string>

class pass{
    private:
        int specialRan;
        std::string a;

    public:
        void addNum(){
            char num = rand() % 10+48;
            a.push_back(num);
        }
        void addLower(){
            char lower = rand() % 26+97;
            a.push_back(lower);
        }
        void addUpper(){
            char cap = rand() % 26+65; 
            a.push_back(cap);
        }
        void addSpecial(){
            char special;
            specialRan = rand()% 4;
            if(specialRan == 0)
                special = rand() % 15+33; 
            else if(specialRan == 1)
                special = rand() % 6+91; 
            else if(specialRan == 2)
                special = rand() % 7+58; 
            else if(specialRan == 3)
                special = rand() % 4+123; 
            a.push_back(special);
        }
        
        void printcap(){
            std::cout<<a;
        }
};