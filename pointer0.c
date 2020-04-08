// This program will print the characters of
// a string by using pointer

#include <stdio.h>
#include <string.h>

int main()
{
    int i;
    char str[]= "Hello World";
    char *pt;
    pt = str;
    for(i=0; i<strlen(str); i++)
    {
        printf("\n %c", *pt);
        pt++;
    }
    return 0;

}
