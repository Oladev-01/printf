#include <stdio.h>
#include "main.h"
int main()
{
	int num = 465738;
	
	int len = _printf("Let's try to printf a simple sentence.\n");
	_printf("Length:[%d, %i]\n", len, len);
	len = _printf(NULL);
	_printf("Length:[%d, %i]\n", len, len);
	len = _printf("%d", num);
	_printf("\nLength:[%d, %i]\n", len, len);
	len = _printf("Character:[%c]\n", 'H');
	_printf("Length:[%d, %i]\n", len, len);
	len = _printf("String:[%s]\n", "I am a string !");
	_printf("Length:[%d, %i]\n", len, len);
	len = _printf("this%v");
	_printf("\nLength:[%d, %i]\n", len, len);
	return (0);
}
