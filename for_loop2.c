// prints an n-by-n grid of bricks with loop //
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n=get_int("size=");
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
           printf("#");
        }
        printf("#\n");
        
    }
    printf("\n");
}
