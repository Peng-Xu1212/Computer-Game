#include "RandomComputer.h"
#include <iostream>
#include <string>
#include <stdio.h>
#include <ctype.h>
#include <cstring>
#include <cstdlib>
#include <stdlib.h>
#include <time.h>

using namespace std;

RandomComputer::RandomComputer():computer()
{
    new_word="dgsdf";
}

void RandomComputer::set_value()
{
    new_array[0]='P';
    
    new_array[1]='R';
    
    new_array[2]='S';
    
    srand((unsigned)time(NULL));
    
    for(int i=0; i<5; i++)
    {
        new_word[i]=new_array[rand()%3+0];// this is use to return the random value, [rand()%3+0] mening choose p s r randomlily.
        
        cout << new_word[i];
    }
    
   
};

void RandomComputer::set_name()
{
    cout << "RandomComputer" << endl;
}


