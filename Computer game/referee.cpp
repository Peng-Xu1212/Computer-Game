#include "referee.h"
#include <iostream>
#include <stdio.h>
#include <string>
#include <ctype.h>
#include <cstring>



using namespace std;

referee::referee()
{
    
}

int referee::compare(computer player1, computer player2)
{
    int player1_add=0;
    
    int player2_add=0;
    
    for(int i=0 ; i< 5 ; i++) // this part is use to choose who is the winner between the two object
    {

        if(player1.com_input[i]==player2.com_input[i])
            
        {
            
        }
        
        else{
            
            if(player1.com_input[i]=='R'&&player2.com_input[i]=='S')
                
            {
                
                player1_add++;
                
            }
            
            if(player1.com_input[i]=='S'&&player2.com_input[i]=='P')
                
            {
                
                player1_add++;
                
            }
            
            if(player1.com_input[i]=='P'&&player2.com_input[i]=='R')
                
            {
                
                player1_add++;
                
            }
            
            if(player1.com_input[i]=='S'&&player2.com_input[i]=='R')
                
            {
                
                player2_add++;
                
            }
            
            if(player1.com_input[i]=='P'&&player2.com_input[i]=='S')
                
            {
                
                player2_add++;
                
            }
            
            if(player1.com_input[i]=='R'&&player2.com_input[i]=='P')
                
            {
                
                player2_add++;
                
            }
            
            
            
        }
    }
    
    
    if(player1_add>=player2_add)
    {
        return 1;
    
    }else{
    
        return 0;
    }
}
