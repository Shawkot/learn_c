// THis program ask name of a user and print the full name
// by using gets() function

#include <stdio.h>
#include <string.h>

int main(void)
{
   char name[50];
   printf("Enter your full name \n");
   gets(name);
   printf("your name is %s", name);
    return 0;
}
