#include "main.h"
/**
 * hex_upper - this is the entry function when %X is parsed as format specifier
 *@format: this string should contain the format specifier
 *@ptr: initializer pointing to format and the argument to be converted
 * Return: count of the numbers printed
 */
int hex_upper(const char *format, va_list ptr)
{
	int count = 0;
	unsigned int num;

	num = va_arg(ptr, unsigned int);

	if (*format && format[0] == 'X')
	{
		count += conv_hex_upper(num);
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
 * conv_hex_upper - this function handles the logic for the conversion
 * @num: number to be converted
 *str - this is typedef as char *
 *Return: count of the numbers printed
 */
int conv_hex_upper(unsigned int num)
{
	int count = 0, i = 0, hold[64];
	str hex = "0123456789ABCDEF";

	if (num == 0)
	{
		_putchar('0');
		count++;
	}
	else
	{
		while (num != 0)
		{
			hold[i] = hex[num % 16];
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
	}
	return (count);
}
