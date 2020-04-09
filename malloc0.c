// This program will allocate and reallocate memory dynamically

#include <stdio.h>
int main () {
   char *ptr;
   ptr =  malloc(10 * sizeof(*ptr));
   strcpy(ptr, "Shawkot ");
   printf(" %s,  Address = %u\n", ptr, ptr);

   ptr = (char *) realloc(ptr, 20); //ptr is reallocated with new size
   strcat(ptr, "Hossain Riaz");
   printf(" %s,  Address = %u\n", ptr, ptr);
   free(ptr);
   return 0;
}
