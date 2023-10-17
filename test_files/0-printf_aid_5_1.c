#include "main.h"
/**
 * hex_lower - this is the entry function for when %x is parsed as specifier
 *@format: this is the string that contains the format specifier
 *@ptr: initializer to the string(format) and the argument parsed by the %x
 *Return: the count of the numbers printed
 */
int hex_lower(const char *format, va_list ptr)
{
	int count = 0;
	unsigned int num;

	num = va_arg(ptr, unsigned int);

	if (*format && format[0] == 'x')
	{
		count += conv_hex_lower(num);
	}
	else
	{
		_putchar('%');
		_putchar(format[0]);
		count += 2;
	}
	return (count);
}

/**
 * conv_hex_lower - this function handles the logic
 *for the conversion to hexadecmal in lowercase
 *@num: this is the number to be converted
 *Return: the count of the numbers printed after conversion
 */
int conv_hex_lower(unsigned int num)
{
	int count = 0, i = 0, hold[64];
	char *str = "0123456789abcdef";

	if (num == 0)
	{
		_putchar('0');
		count++;
	}
	else
	{
		while (num != 0)
		{
			hold[i] = str[num % 16];
			num /= 16;
			i++;
		}
		i--;
		while (i >= 0)
		{
			_putchar(hold[i]);
			count++;
			i--;
		}
		return (count);
	}
}
