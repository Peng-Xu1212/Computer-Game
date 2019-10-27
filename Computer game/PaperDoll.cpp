#include "PaperDoll.h"
#include <iostream>
#include <stdio.h>
#include <string>
#include <cstring>
#include <ctype.h>

using namespace std;

PaperDoll::PaperDoll():computer()
{

}

void PaperDoll::set_value()
{
    com_input="PSSPS";
}

void PaperDoll::set_name()
{
    cout << "PaperDoll" << endl;
}



