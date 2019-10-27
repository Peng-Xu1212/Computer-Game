#include "referee.h"
#include <iostream>
#include <sstream>
#include <stdio.h>
#include <string>
#include <cstring>
#include <ctype.h>
#include "Toolbox.h"
#include "Avalanche.h"
#include "Bureaucrat.h"
#include "Crescendo.h"
#include "FistfullODollars.h"
#include "RandomComputer.h"
#include "PaperDoll.h"
#include "Tournament.h"

using namespace std;

void tour() //using to compare the function;
{
    bool check=true;
    
    string player[8];
    
    computer** newcomputer = new computer*[8];
    
    
    for(int i=0 ; i<8 ; i++)
    {
        
        cin >> player[i]; //cin the value
        
        if(player[i]=="RandomComputer")
        {
            newcomputer[i] = new RandomComputer;
            
            newcomputer[i]->set_value();
        }
        else{ // input is Avalanche set to the Avalanche class
            
        if(player[i]=="Avalanche")
        {
            newcomputer[i] = new Avalanche;
                
            newcomputer[i]->set_value();
        }else{//if input is Bureaucrat set to the Bureaucrat class
                
        if(player[i]=="Bureaucrat")
        {
            newcomputer[i] = new Bureaucrat;
                    
            newcomputer[i]->set_value();
        }else{//if input is Toolbox set to the Toolbox class
                    
        if(player[i]=="Toolbox")
        {
            newcomputer[i] = new Toolbox;
                        
            newcomputer[i]->set_value();
        }else{//if input is Crescendo set to the Crescendo class
                        
        if(player[i]=="Crescendo")
        {
            newcomputer[i] = new Crescendo;
                            
            newcomputer[i]->set_value();
        }else{// if input is PaperDoll set to the PaperDoll class
                            
        if(player[i]=="PaperDoll")
        {
            newcomputer[i] = new PaperDoll;
            
            newcomputer[i]->set_value();
        }else{//if input is FistfullODollars set to the FistfullODollars class
                                
        if(player[i]=="FistfullODollars")
        {
            newcomputer[i] = new FistfullODollars;
                                    
            newcomputer[i]->set_value();
        }else{
                                    
        if(player[i]=="RandomComputer")
        {
            newcomputer[i] = new RandomComputer;
            
            newcomputer[i]->set_value();
        }else{
                                        
            check=false;
                                        
            delete newcomputer;
                                        
            break;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    if(check)
    {
        Tournament T;
        
        T.match(newcomputer);
        
        delete[] newcomputer;
    }
    
}

int main()
{
    tour();
    
    return 0;
}
