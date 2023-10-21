#include "main.h"
#include <limits.h>

int main(void)
{
	int len, len2;

	len = _printf("%d\n", INT_MIN);
	len2 = printf("%d\n", INT_MIN);
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
	return (0);
}
