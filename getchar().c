//This program will say if one is agree or not
// by using getchar(); function

#include <stdio.h>
#include <string.h>

int main(void)
{
  char cond1;
  printf("enter your keyword:");
  cond1 = getchar();
  if(cond1 =='y')
  {
      printf("agreed");
  }
  else
    {
    printf("not agreed");
    }
    return 0;
}
