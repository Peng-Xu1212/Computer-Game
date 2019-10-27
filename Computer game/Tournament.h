#ifndef Tournament_h
#define Tournament_h
#include <iostream>
#include <stdio.h>
#include <string>
#include "referee.h"
#include "computer.h"
#include "RandomComputer.h"
#include "FistfullODollars.h"
#include "PaperDoll.h"
#include "Crescendo.h"
#include "Toolbox.h"
#include "Bureaucrat.h"
#include "Avalanche.h"


class Tournament
{
public:
    Tournament();
    
    void match(computer **A);
    
};
#endif
