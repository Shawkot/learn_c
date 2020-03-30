//This program will say if one is agree or not//
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    char c=get_char("Do you agreed?\n");
    if(c=='y' || c=='Y')
    {
        printf("Agreed\n");
    }
    else if (c=='n' || c=='N')
    {
        printf("NOt agreed\n");
    }
}
