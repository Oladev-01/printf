#include "main.h"
#include <limits.h>

int main(void)
{
	int len, len2;

	len = _printf("%d\n", INT_MIN);
	printf("\n");
	len = _printf("%d", -23456);
	fflush(stdout);
	if (len != len2)
	{
		fflush(stdout);
		return (1);
	}
	return (0);
}
