#include "main.h"
#include <limits.h>

int main(void)
{
	int len = _printf("this %u", -9800000);
	_printf("\n%d\n", len);
	len = printf("this %u", -9800000);
	printf("\n%d\n", len);

	return (0);
}
