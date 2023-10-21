#include "main.h"

int conv_int(const char *format, va_list ptr)
{
	int count = 0;
	long int num;

	if (*format && format[0] == 'd' || *format && format[0] == 'i')
	{
		num = va_arg(ptr, long int);
		count += ret_int(num);
	}
	return (count);
}

int ret_int(long int num)
{
	int count = 0, i = 0;
	long int hold[64];

	if (num < 0) // num = -102
	{
		_putchar('-'); // prints minus ('-')
		num *= -1; // -102 * -1 = 102;
		count++;
	}
	if (num == 0) // num = 0
	{
		putchar('0'); // prints 0
		count++; // count += 1
	}
	while (num != 0) // assuming num == 102
	{
		hold[i] = num % 10; // num % 10 = 101 % 10 = 2
		num /= 10; // num / 10 = 102 / 10 = 10
		i++; // increment i which is the index to the next index
	}
	i--;
	while (i >= 0)
	{
		putchar(hold[i] + '0'); // -102
		count++;
		i--;
	}
	return (count);
}
