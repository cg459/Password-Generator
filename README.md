# Password Generator

## Overall
This is just a small project I created that generates passwords using C++.  
In this repo are 5 differnt files. 3 Cpp files and 2 executables.  
There are 2 executables because there are two differnt versions of the program. PassGenI takes input upon execution. PassGenNI takes 2 arguments and there are no inputs.  

## pseudo-random integral number
This project uses the rand function that is in stdlib.h. For this reason, the numbers generated are, "pseudo-random integral number".  
For more information on the rand function please visit https://www.cplusplus.com/reference/cstdlib/rand/.  

## passGenI
This is the version of the program that asks for input but does not take arguments. You can enter in arguments but they will not be used.  
This executable was created by compiling passGenI.cpp and pass.cpp together.  
When you execute passGenI, you are going to be ask several questions in terms of the criterias of each password. They are as followed  
    - How many passwords would you like?  
    - How many characters do you wanted each passwords to have?  
    - Would you like numbers in your password? Y|N  
    - Would you like lowercase letters in your password? Y|N  
    - Would you like uppercase letters in your password? Y|N  
    - Would you like symbols in your password? Y|N  
There is some error handling in the program. For example, if you were to enter a non-number in the first two question, you would be prompted with an error message and the question would be asked again.  

## passGenNI
This is the version of the program does take arguments but does not ask for any input upon execution. This program takes up to 2 arguments. The first argument is the number of passwords you want to generate and the second password is how many characters you want each password to have.  
If you execute this program with 1 argument, you are given that number of passwords with each password will be 10 characters long.  
If you execute this program with no arguments, you are given 5 passwords with each password being 10 characters long.  
This executable was created by compiling passGenNI.cpp and pass.cpp together.  
