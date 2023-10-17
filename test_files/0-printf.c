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
	int count;

	va_start(ptr, format);
	if (format == NULL)
	{
		va_end(ptr);
		return (-1);
	}
	count = refactor_printf(format, ptr);
	va_end(ptr);
	return (count);
}

/**
 * refactor_printf - wrote this function because betty was disturbing me
 * @format: string to be parsed
 * @ptr: initialiazer or pointer to format and respective arguments
 * Return: count of the fucntion i.e the number of characters printed
 */
int refactor_printf(const char *format, va_list ptr)
{
	int count = 0, i = 0;

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
			if (format[i] == 'd' || format[i] == 'i')
				count += _printf_aid_1(format + i, ptr);
			else if (format[i] == 'c' || format[i] == 's' || format[i] == '%')
				count += _printf_aid(format + i, ptr);
			else if (format[i] == 'b')
				count += _printf_aid_2(format + i, ptr);
			else if (format[i] == 'u')
				count += handle_uns(format + i, ptr);
			else if (format[i] == 'o')
				count += octal(format + i, ptr);
			else if (format[i] == 'x')
				count += hex_lower(format + i, ptr);
			else
			{
				_putchar('%');
				_putchar(format[i]);
				count += 2;
			}
		}
		i++;
	}
	return (count);
}
