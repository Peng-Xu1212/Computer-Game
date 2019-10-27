#ifndef RandomComputer_h
#define RandomComputer_h
#include <iostream>
#include <stdio.h>
#include <string>
#include "computer.h"

class RandomComputer:public computer
{
public:
    
    RandomComputer();
    
    void set_value();

    std::string new_word;
    
    char new_array[5];
    
    void set_name();
};
#endif
