// Give a base value and a exponent value and it will give the output//
#include <cs50.h>
#include <math.h>
#include <stdio.h>

int main(void)
{
    int output=0;
    double base=get_double("base value:");
    double exponent=get_double("exponent value:");
    output=pow(base,exponent);
    printf("output= %i\n", output);

}
