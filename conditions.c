// This program detect greater or lower or equal numbers//
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x=get_int("x=");
    int y=get_int("y=");
    if (x<y)
    {
        printf("y is greater than x\n");
    }
    else if(y<x)
    {
        printf("x is greater than y\n");
    }
    else
    {
        printf("x is equal to y\n");
    }
    
}
