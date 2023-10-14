#include <stdio.h>
#include "main.h"
int main()
{
    char *num = "fish";
    char *ptr = NULL;
    int count = _printf("what?");
    printf("\n%d\n", count);
    count = _printf("what%s", "The?");
    printf("\n%d\n", count);
    count = _printf("what%s", NULL);
    printf("\n%d\n", count);
    count = _printf("what%d");
    printf("\n%d\n", count);
    count = _printf("what%");
    printf("\n%d\n", count);
  
}