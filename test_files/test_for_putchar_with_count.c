#include <stdio.h>
#include "main.h"
int main()
{
    
    int count = _printf(NULL);
     printf("\n%d\n", count);

    count = _printf("Testing empty string: %s", "");
    printf("\n%d\n", count);
   
}