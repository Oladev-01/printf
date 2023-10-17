#include "main.h"
/**
 * octal - this is the entry function when %o is %o is called
 *@format: this string should contain the %o
 * @ptr: initializer to the string and the unsigned int to be converted
 * Return: the count of the octal number printed
 */
int octal(const char *format, va_list ptr)
{
	int count = 0;
	unsigned int num;

	num = va_arg(ptr, unsigned int);

	if (*format && format[0] == 'o')
	{
		count += conv_octal(num);
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
 * conv_octal - this function handles converting numbers to octal
 * @num: this is the number to be converted to octal
 *Return: count of the number printed
 */
int conv_octal(unsigned int num)
{
	int count = 0, hold[32], i = 0;

	if (num == 0)
	{
		_putchar('0');
		count++;
	}
	else
	{
		while (num != 0)
		{
			hold[i] = num % 8;
			num /= 8;
			i++;
		}
		i--;
		while (i >= 0)
		{
			_putchar(hold[i] + '0');
			count++;
			i--;
		}
	}
	return (count);
}
