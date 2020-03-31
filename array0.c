// finding average of 3 numbers by using array //
#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    int scores[3];
    scores[0]=get_int("put your 1st value:");
    scores[1]=get_int("put your 2nd value:");
    scores[2]=get_int("put your 3rd value:");
    printf("average= %i", (scores[0] + scores[1] + scores[2])/3);
    printf("\n");
}
