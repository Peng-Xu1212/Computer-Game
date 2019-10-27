#include "Tournament.h"
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

using namespace std;

Tournament::Tournament()
{
    
}

void Tournament::match(computer **A)
{
    referee r; //using the referee class
    
    computer** winner = new computer*[4]; //After four times
    
    computer** king_winner = new computer*[2]; //After two times
    
    for(int i=0,j=0 ; i<8 ; i+=2,j++)
    {
        if(r.compare(*A[i],*A[i+1]))
        {
            winner[j]=A[i];
        }else{
            winner[j]=A[i+1];
        }
    }
    //to match the top four player
    for(int i=0,j=0 ; i<4 ; i+=2,j++)
    {
        if(r.compare(*winner[i],*winner[i+1]))
        {
            king_winner[j]=winner[i];
        
        }else{
        
            king_winner[j]=winner[i+1];
        }
    }
    //the final
    
    if(r.compare(*king_winner[0],*king_winner[1]))// set to the name function.
    {
    
        king_winner[0]->set_name();
    
    }else{
    
        king_winner[1]->set_name();
    }
    //free memory
    
    delete winner;
    
    delete king_winner;

}
