#include "Toolbox.h"
#include <iostream>
#include <stdio.h>
#include <ctype.h>
#include <cstring>


using namespace std;

Toolbox::Toolbox():computer()
{

}

void Toolbox::set_value()
{
    for(int i=0 ; i<5 ; i++)
    {
        com_input.push_back('S');
    }
}

void Toolbox::set_name()
{
    cout << "Toolbox" << endl;
}


