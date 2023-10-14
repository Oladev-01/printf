#include <stdio.h>
#include "main.h"

int main()
{
    char *num = "fish";
    int count = 0;
   count += _printf("Th%s\n", num);
    printf("%d\n", count);
}