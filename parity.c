#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int number=get_int("input the value=");
    number=number%2;
    if(number==0)
    {
        printf("number is even\n");
    }
    else
    {
        printf("number is odd\n");
    }
}
