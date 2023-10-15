#include "main.h"
/**
 * _printf - this is the prototype printf function.
 * this checks for char and string
 * @format: this is the string to be checked similar to the printf
 * str: this is the typedef for char*
 * Return: count of the string
 */
int _printf(const char *format, ...)
{
	va_list ptr;
	int count = 0, i = 0;

	va_start(ptr, format);
	if (format == NULL)
	{
		va_end(ptr);
		return (-1);
	}

	if (*format)
	{
		while (format[i])
		{
			if (format[i] != '%')
			{
				_putchar(format[i]);
				count++;
			}
			else
			{
				i++;
				if (format[i] == '\0')
				{
					va_end(ptr);

					return (-1);
				}
				count += _printf_aid(format + i, ptr);
			}
			i++;
		}
	}
	va_end(ptr);
	return (count);
}
