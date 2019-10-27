#ifndef PaperDoll_h
#define PaperDoll_h
#include <stdio.h>
#include <iostream>
#include <string>
#include "computer.h"

class PaperDoll:public computer
{
public:
    PaperDoll();
    
    void set_value();
    
    void set_name();
 
    
};
#endif

