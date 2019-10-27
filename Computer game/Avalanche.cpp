#include "Avalanche.h"
#include <iostream>
#include <stdio.h>
#include <string>
#include <ctype.h>
#include <cstring>

using namespace std;

Avalanche::Avalanche():computer()
{
   
}

void Avalanche::set_value()
{
    for(int i=0 ; i<5 ; i++)
    {
        com_input.push_back('R');
    }
}

void Avalanche::set_name()
{
    cout << "Avalanche" << endl;
}


