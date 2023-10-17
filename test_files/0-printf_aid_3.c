#include "main.h"
/**
 *handle_uns - this is the entry function and it is called when %u is parsed
 *@format: this string should contain &u
 *@ptr: initializer to format and the unsigned int variable
 *Return: the count of the numbers
 */
int handle_uns(const char *format, va_list ptr)
{
	unsigned int num;
	int count = 0;

	num = va_arg(ptr, unsigned int);

	if (*format && format[0] == 'u')
	{
		count += ret_uns(num);
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
 * ret_uns - this handles the unsigned int logic
 * @num: this the unsigned int to be printed out
 * Return: the count of the numbers printed
 */
int ret_uns(unsigned int num)
{
	int count = 0, hold[64], i = 0;

	if (num == 0)
	{
		_putchar('0');
		count++;
	}
	else
	{
		while (num != 0)
		{
			hold[i] = num % 10;
			num /= 10;
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
