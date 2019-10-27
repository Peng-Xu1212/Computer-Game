#ifndef Bureaucrat_h
#define Bureaucrat_h
#include "computer.h"
#include <iostream>
#include <stdio.h>
#include <string>

class Bureaucrat : public computer
{
public:
    
    Bureaucrat();
    
    void set_value();
    
    void set_name();
    
};
#endif
