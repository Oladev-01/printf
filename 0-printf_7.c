#include "main.h"
/**
 * address - this function is called when the %p is parsed to the string
 * @format: this should contain the %p format specifier
 *@ptr: initializer to the string and
 * the argument(the variable we are to get its address)
 *Return: count of the address printed
 */
int address(const char *format, va_list ptr)
{
	int count = 0;

	if (*format && format[0] == 'p')
	{
		void *pts = va_arg(ptr, void *);

		if (pts == NULL)
		{
			write(1, "(nil)", 5);
			count += 5;
			return (count);
		}
		count += find_address(ptr);
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
 * find_address - this function handles getting the address of the variable
 *@pts: the is the pointer to the varaiable we are to get its address
 *Return: count of the address printed
 */
int find_address(void *pts)
{
	int count = 0;
	char hold[64];

	snprintf(hold, sizeof(hold), "%p", pts);
	write(1, hold, strlen(hold));
	count += strlen(hold);

	return (count);
}
