// This program illustrate the release of 
// a dynamically allocated memory space

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *ptr;
    ptr = malloc(5 * sizeof(*ptr));
    if(ptr != NULL)
    {
        *(ptr+3) = 30;
        printf("The value of 3rd integer: %d", *(ptr+3));
    }
    free(ptr);
    return 0;
}
