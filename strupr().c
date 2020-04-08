// This program will convert lowercase string to uppercase

#include <stdio.h>
#include <string.h>

int main(void)
{
  char name[30];
  printf("Enter your name:");
  gets(name);
  printf("your name in uppercase is %s", strupr(name));
  return 0;

}
