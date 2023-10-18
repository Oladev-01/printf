#include "main.h"
/**
 * check_for_non_print - this is the entry function for when %S is parsed
 *@format: this should contain the %S and necessary
 * conversion is done on the argumement passed
 *@ptr: initializer to format and subsequent arguments called by %S
 *str - this is the typedef for char *
 *Return: the count of the string printed
 */
int check_for_non_print(const char *format, va_list ptr)
{
	int count = 0;
	str s;

	s = va_arg(ptr, str);

	if (*format && format[0] == 'S')
	{
		if (s == NULL)
		{
			write(1, "(null)", 6);
			count += 6;
			return (count);
		}
		count += non_print(s);
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
 * non_print - this function converts non printable characters to \x
 * followed by hexadecimal conversion of its ascii
 * value (length-modified to 2 chars) and also prints printable characters
 *@s: this is the string parsed
 *Return: count of the printed string
 */
int non_print(char *s)
{
	int count = 0, i = 0, a;
	char hex[4];

	while (s[i] != '\0')
	{
		if (s[i] < 32 || s[i] >= 127)
		{
			sprintf(hex, "%02X", (unsigned char)s[i]);
			_putchar('\\');
			_putchar('x');
			for (a = 0; a < 2; a++)
			{
				_putchar(hex[a]);
			}
			count += 4;
		}
		else
		{
			_putchar(s[i]);
			count++;
		}
		i++;
	}
	return (count);
}

