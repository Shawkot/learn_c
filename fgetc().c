// This program will read a file by using fgetc() function

#include <stdio.h>
#include <string.h>

int main(void)
{
    char c;
    FILE *fp;
    fp = fopen("PB.text", "r");
    while((c=fgetc(fp))!= EOF )
    {
        printf("%c", c);
    }
    fclose(fp);
    return 0;
}
