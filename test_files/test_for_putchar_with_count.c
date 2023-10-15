#include <stdio.h>
#include "main.h"
int main()
{
	int num = -762534190;
	int count = _printf(NULL);
	 printf("\n%d\n", count);
	count = _printf("Testing empty string:");
	printf("\n%d\n", count);
	count = _printf("what%d", num);
	printf("\n%d\n", count);
  
}