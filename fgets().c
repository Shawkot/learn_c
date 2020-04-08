// This program will ask one's full name and
// print the full name by using fgets(); function

#include <stdio.h>
#include <string.h>

int main(void)
{
  char name[30];
  printf("Enter your full name:");
  fgets(name, 30, stdin);
  printf("My name is %s", name);
  return 0;
}
