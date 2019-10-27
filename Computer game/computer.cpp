#include "computer.h"
#include <iostream>
#include <stdio.h>
#include <string>


using namespace std;

computer::computer()
{
    
}

void computer::set_value()
{
    for(int i=0 ; i<5 ; i++)
    {
        com_input.push_back('R');
    }
}


void computer::set_name()
{
    cout << "player";
}
