// Writting to a file by using fputs() function

#include <stdio.h>
int main()
{
        int i;
        FILE * fptr;
        fptr = fopen("fputs.txt", "w"); // "w" defines "writing mode"
        fputs("this is file program by using fputs", fptr);
        fclose(fptr);
        return 0;
}
