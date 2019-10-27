#ifndef computer_h
#define computer_h
#include <stdio.h>
#include <iostream>
#include <string>

class computer
{
public:
    
        computer();
    
        std::string com_input; //set the computer player's moves
    
        virtual void set_value();//print the computer player's name
    
        virtual void set_name();
};
#endif
