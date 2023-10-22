#include "main.h"


int main(void)
{
	int len, len2;
	void *p = (void *)0x7fff5100b608;

	len = _printf("%p", p);
	printf("\n");
	len2 = printf("%p", p);
	printf("\n");
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
	return (0);
}
