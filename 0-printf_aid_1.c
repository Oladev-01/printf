#include "main.h"
/**
 * print_integer - Print an integer to the standard output
 * @n: The integer to print
 * Return: The number of characters printed
 */
int print_integer(int n)
{
	int count = 0, i, temp = n, num_chars = 0;
	str num_str;

	if (n == 0)
	{
		_putchar('0');
		count++;
	}
	else
	{
		while (temp != 0)
		{
			temp /= 10;
			num_chars++;
		}
		num_str = NULL;
		num_str = malloc(num_chars + 2);

		if (num_str == NULL)
			return (-1);
		snprintf(num_str, num_chars + 1, "%d", n);

		for (i = 0; i < num_chars; i++)
		{
			_putchar(num_str[i]);
			count++;
		}
	}
	free(num_str);
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
		int n = va_arg(ptr, int);

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
