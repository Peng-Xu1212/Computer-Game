#ifndef REFEREE_H_
#define REFEREE_H_
#include <iostream>
#include <string>
#include <sstream>
#include "Avalanche.h"
#include "Bureaucrat.h"
#include "Crescendo.h"
#include "FistfullODollars.h"
#include "computer.h"
#include "PaperDoll.h"
#include "RandomComputer.h"
#include "Toolbox.h"

class referee
{
public:
    referee();
    
    int compare(computer player1, computer player2);
    
    
};

#endif
