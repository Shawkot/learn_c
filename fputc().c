// Writing to a file by using fputc() function

#include <stdio.h>
int main()
{
        int i;
        FILE * fptr;
        char fn[50];
        char str[] = "My first file program\n";
        fptr = fopen("fputc.txt", "w"); // "w" defines "writing mode"
        for(i=0; str[i] != '\n'; i++)
        {
            fputc(str[i], fptr);
        }

        fclose(fptr);
        return 0;
}
