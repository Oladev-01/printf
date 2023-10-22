#include "main.h"
/**
 * print_integer - Print an integer to the standard output
 * @n: The integer to print
 * Return: The number of characters printed
 */
int print_integer(long int n)
{
	int count = 0, i = 0;
	long int hold_int[32];

	if (n == 0)
	{
		_putchar('0');
		count++;
	}
	else
	{
		while (n != 0)
		{
			hold_int[i] = n % 10;
			n /= 10;
			i++;
		}
		i--;
		while (i >= 0)
		{
			_putchar(hold_int[i] + '0');
			count++;
			i--;
		}
	}
	return (count);
}

/**
 * _printf_aid_1 - handles the logic for %d and %i
 * @format: the format specifier string
 * @ptr: a va_list containing the arguments
 * Return: count of characters printed
 */
int _printf_aid_1(const char *format, va_list ptr)
{
	int count = 0;

	if (format && (format[0] == 'd' || format[0] == 'i'))
	{
		long int n = va_arg(ptr, int);

		if (n < 0)
		{
			_putchar('-');
			n = -n;
			count++;
		}

		count += print_integer(n);
	}
	else
	{
		_putchar('%');
		_putchar(format[0]);
		count += 2;
	}
	return (count);
}
