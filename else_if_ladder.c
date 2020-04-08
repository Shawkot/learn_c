// This program will ask a number and tell your grade
//by using else-if ladder

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num;
    printf("what's your mark?\n");
    scanf("%d", &num);

    if(num>79)
    {
        printf("your grade is A+\n");
    }
    else if(num>69)
    {
        printf("your grade is A");
    }
    else if(num>59)
    {
        printf("your grade is A-\n");
    }
    else
    {
        printf("you got B \n");
    }
    return 0;
}
