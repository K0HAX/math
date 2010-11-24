#include <stdio.h>

/*
  Semi-Modular command line calculator.
  Written by Michael Englehorn.
*/

int operator_decode(char x[2])
{
    if(strcmp(x, "+") == 0)
    {
                 return 1;
    }
    if(strcmp(x, "-") == 0)
    {
                 return 2;
    }
    if(strcmp(x, "*") == 0)
    {
                 return 3;
    }
    if(strcmp(x, "/") == 0)
    {
                 return 4;
    }
    if(strcmp(x, "%") == 0)
    {
                 return 5;
    }
    return 0;   
}
