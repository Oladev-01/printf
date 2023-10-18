#include "main.h"
#include <limits.h>

int main(void)
{
	int len = _printf("what %s", "the");
	_printf("\n%d\n", len);
	len = printf("what %s", "the");
	printf("\n%d\n", len);
	len = printf("what%");
	printf("\n%d\n", len);
	return (0);
}
