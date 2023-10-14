#include <stdio.h>
#include "main.h"
int main()
{
    char *num = "fish";
    char *ptr = NULL;
    int count = 0;
   count += _printf("This %s and %s:\n", num, ptr);
    count += _printf("P:[%%]\n");
    printf("this should return the count for the string as: %d\n", count);
    
}