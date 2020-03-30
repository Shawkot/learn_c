// Prints a row of n question marks with a loop
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n=get_int("n=");
    for (int i = 0; i < n; i++)
    {
        printf("?");
    }
    printf("\n");
    
}
