#include "main.h"

int main(void)
{
	unsigned int num = -980000;

	int len = _printf("Percent %c\n", 'H');
	int len2 = printf("Percent:[%%]\n");

	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);
	len = _printf("%d and %i", -23, -24567);
	printf("\n%d\n", len);
	len = _printf("%d", num);
	_printf("\n%d\n", len);
	return (0);

}
