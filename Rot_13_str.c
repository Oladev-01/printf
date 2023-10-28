#include "main.h"
/**
 * Rot_13_str - this function converts the string to
 * its ROT13 character encoding
 *@format: this string contains the directive
 *@ptr: the initiliazer
 *str: typedef as char *
 *Return: the count of the string printed
 */
int Rot_13_str(const char *format, va_list ptr)
{
	int count = 0, a = 0;
	char c, base;
	str rot_str;

	if (*format && format[0] == 'R')
	{
		rot_str = va_arg(ptr, str);
		if (rot_str == NULL)
		{
			rot_str = "(null)";
			write(1, rot_str, strlen(rot_str));
			count += strlen(rot_str);
			return (count);
		}
		while (rot_str[a] != '\0')
		{
			c = rot_str[a];
			if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
			{
				base = (c >= 'a' && c <= 'z') ? 'a' : 'A';
				c = (((c - base) + 13) % 26) + base;
			}
			_putchar(c);
			count++;
			a++;
		}
	}
	return (count);
}
