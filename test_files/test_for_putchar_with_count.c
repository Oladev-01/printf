#include "main.h"
#include <limits.h>

int main(void)
{

	int num = 100;
	int *p = &num;
	int len = _printf("this %u", 9800000);
	_printf("\n%d\n", len);
	len = printf("this %u", 9800000);
	printf("\n%d\n", len);
	len = _printf("what %o", 88);
	_printf("\n%d\n", len);
	len = printf("what %o", 88);
	printf("\n%d\n", len);
	len = _printf("what %x", -158);
	_printf("\n%d\n", len);
	printf("what %x", -158);
	printf("\n%d\n", len);
	len = _printf("what %X", -255);
	_printf("\n%d\n", len);
	len = printf("what %X", -255);
	printf("\n%d\n", len);
	len = _printf("%S", "Best\nSchool");
	_printf("\n%d\n", len);
	len = _printf("i%S", NULL);
	_printf("\n%d\n", len);
	len = _printf("what %p", num);
	_printf("\n%d\n", len);
	len = printf("what %p", p);
	printf("\n%d\n", len);



	return (0);
}
