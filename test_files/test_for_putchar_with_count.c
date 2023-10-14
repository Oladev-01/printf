#include <stdio.h>
#include "main.h"

int main()
{
    char num = 'f';
   int count = _printf("This is the first test for my func. print digit like %c and it can count:\n", num);
    printf("this should return the count for the string as: %d\n", count);
}