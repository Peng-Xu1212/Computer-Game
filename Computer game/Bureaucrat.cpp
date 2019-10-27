#include "Bureaucrat.h"
#include <iostream>
#include <stdio.h>
#include <string>
#include <cstring>
#include <ctype.h>


using namespace std;

Bureaucrat::Bureaucrat():computer()
{
    
}

void Bureaucrat::set_value()
{
    for(int i=0 ; i<5 ; i++)
    {
        com_input.push_back('P');
    }
}

void Bureaucrat::set_name()
{
    cout << "Bureaucrat" << endl;
}


