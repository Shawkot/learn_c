// create a phonebook using file //
#include <stdio.h>
#include <string.h>

int main(void)
{
    FILE *file = fopen("phonebook1.csv", "a");
    char  name[20];
    char  number[15];
    printf("name: \n");
    scanf("%s", name);
    printf("number: \n");
    scanf("%s", number);

    fprintf(file, "%s %s \n", name, number);
    fclose(file);
}
