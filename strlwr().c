// This program will conver uppercase string into lowercase 

#include <stdio.h>
#include <string.h>

int main(void)
{
  char name[30];
  printf("Enter your name:");
  gets(name);
  printf("your name in lowercase is %s", strlwr(name));
  return 0;

}
