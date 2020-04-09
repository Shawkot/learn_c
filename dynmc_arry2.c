// This program will create a dynamic array
// by using malloc() function

#include <stdio.h>
    int main()
    {
        int * arr_dynamic = NULL;
        int elements = 4, i;
        arr_dynamic = calloc(elements, sizeof(int)); //Array with 2 integer blocks
        for (i = 0; i < elements; i++)
        {
         arr_dynamic[i] = i;
         printf("arr_dynamic[%d]=%d\n", i, arr_dynamic[i]);
        }
        elements = 8;
        arr_dynamic = realloc(arr_dynamic, elements * sizeof(int)); //reallocate 4 elements
        printf("After realloc\n");
        for (i = 2; i < elements; i++) arr_dynamic[i] = i;
        for (i = 0; i < elements; i++) printf("arr_dynamic[%d]=%d\n", i, arr_dynamic[i]);
        free(arr_dynamic);
        return 0;
    }
