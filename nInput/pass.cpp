#include<iostream>
#include <stdlib.h>
#include <string>


class pass{
    private:
        char num;
        char lower;
        char cap;
        char special;
        char special2;
        char special3;
        char special4;
        char comp;
        int specialRan;
        std::string a;

    public:
        void addNum(int count){
            std::string rep;
            for(int i = 0; i< count;i++)
            {
                num = rand() % 10+48;
                rep+= num;
            }
            a.append(rep);
        }

        void addNum(){
            std::string rep;
            num = rand() % 10+48;
            rep+= num;
            a.append(rep);
        }

        void addlower(int count){
            std::string rep;
            for(int i = 0; i< count;i++)
            {
                lower = rand() % 26+97;
                rep += lower;
            }
            a.append(rep);
        }

        void addlower(){
            std::string rep;
            lower = rand() % 26+97;
            rep += lower;
            a.append(rep);
        }

        void addcap(int count)
        {
            std::string rep;
            for(int i = 0; i< count;i++)
            {
                cap = rand() % 26+65; 
                rep += cap;
            }
            a.append(rep);
        }

        void addcap()
        {
            std::string rep;
            cap = rand() % 26+65; 
            rep += cap;
            a.append(rep);
        }

        void addspecial(int count)
        {
            std::string rep;
            for(int i = 0; i< count;i++)
            {            
                specialRan = rand()% 4;
                if(specialRan == 0)
                {
                    special = rand() % 15+33;
                    rep+=special;
                }
                else if(specialRan == 1)
                {
                    special2 = rand() % 6+91; 
                    rep+=special2;

                }
                else if(specialRan == 2)
                {
                    special3 = rand() % 7+58; 
                    rep+=special3;
                }
                else if(specialRan == 3)
                {
                    special4 = rand() % 4+123; 
                    rep+=special4;
                }  
            }
            a.append(rep);
        }

        void addspecial()
        {
            std::string rep;           
            specialRan = rand()% 4;
            if(specialRan == 0)
            {
                special = rand() % 15+33; 
                rep+=special;
            }
            else if(specialRan == 1)
            {
                special2 = rand() % 6+91; 
                rep+=special2;
            }
            else if(specialRan == 2)
            {
                special3 = rand() % 7+58; 
                rep=special3;
            }
            else if(specialRan == 3)
            {
                special4 = rand() % 4+123; 
                rep+=special4;
            }  

            a.append(rep);
        }


        void printcap()
        {
            std::cout<<a;
        }
};