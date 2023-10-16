#include "main.h"

/**
 * print_binary - Print an unsigned integer in binary format
 * @n: The unsigned integer to print
 * Return: The number of characters printed
 */
int print_binary(unsigned int n)
{
	int count = 0;

	if (n == 0)
	{
		_putchar('0');
		count++;
	}
	else
	{
		int binary[32];
		int i = 0;

		while (n > 0)
		{
			binary[i] = n % 2;
			n /= 2;
			i++;
		}
		i--;
		while (i >= 0)
		{
			_putchar(binary[i] + '0');
			count++;
			i--;
		}
	}

	return (count);
}

/**
 * _printf_aid_2 - Handles the logic for custom specifier %b
 * @format: The format specifier string
 * @ptr: A va_list containing the arguments
 * Return: The count of characters printed
 */
int _printf_aid_2(const char *format, va_list ptr)
{
	int count = 0;

	if (format && format[0] == 'b')
	{
		unsigned int n = va_arg(ptr, unsigned int);
		count += print_binary(n);
	}
	else
	{
		_putchar('%');
		_putchar(format[0]);
		count += 2;
	}

	return (count);
}
