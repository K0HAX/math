#include <stdio.h>
#include "operator_decode.c"
#include "add.c"
#include "subtract.c"
#include "multiply.c"
#include "devide.c"
#include "modulus.c"

/*
  Semi-Modular command line calculator.
  Written by Michael Englehorn.
*/

int main()
{
    float first = 0;
    float second = 0;
    char operator[2];
    int dec_operator = 0;
    float sum = 0;
    float devision = 0;
    char syntax_error[1024];
    char buffer[1024];
    
    
    printf("Please type a mathmatical expression in the following format\n<Number><Operator(+-*/)><number>\n");
    printf("Formula: ");
    scanf("%f%c%f",&first,&operator,&second);    
    dec_operator = operator_decode(operator);
    
    /* 1 is add, 2 is subtract, 3 is multiply, 4 is devide, 0 is error. */
    
    if(dec_operator == 1)
    {
                   sum = add(first, second);
                   sprintf(buffer,"%f + %f = %f\n",first,second,sum);
    }
    if(dec_operator == 2)
    {
                    sum = subtract(first, second);
                    sprintf(buffer,"%f - %f = %f\n",first,second,sum);
    }
    if(dec_operator == 3)
    {
                    sum = multiply(first, second);
                    sprintf(buffer,"%f * %f = %f\n",first,second,sum);
    }
    if(dec_operator == 4)
    {
                    sum = devide(first, second);
                    sprintf(buffer,"%f / %f = %f\n",first,second,sum);
    }
    if(dec_operator == 5)
    {
                    sum = modulus(first, second);
                    sprintf(buffer,"%f mod %f == %f\n",first,second,sum);
    }
    if(dec_operator == 0)
    {
                    sprintf(buffer,"You entered an invalid operator, valid options are: +,-,*,/,%%\n");
    }
    
    printf("%s", buffer);
    printf("\nPress enter to continue...");
    scanf("%c%c",&buffer,&buffer);
    /* system("pause"); */
}
