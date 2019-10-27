#ifndef Toolbox_h
#define Toolbox_h
#include <iostream>
#include <stdio.h>
#include <string>
#include "computer.h"

class Toolbox:public computer
{
public:
    
    Toolbox();
    
    void set_value();
    
    void set_name();
    
};
#endif
