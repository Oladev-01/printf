#include "main.h"
/**
 * _printf_aid - this function checks for the occurrence
 * of format specifiers and makes neccessary conversion
 * @format: this is the string that include zero or more directives
 * @ptr: this is the initiliazer
 * Return: count of the format string
 * str is typedef'ed as char*
 */
int _printf_aid(const char *format, va_list ptr)
{
	int count = 0, i = 0;
	char s, c;
	str string;

				switch (format[i])
				{
					case 'c':
						c = va_arg(ptr, int);
						_putchar(c);
						count++;
						break;
					case 'd':
					int num = va_arg(ptr, int);
						count += _printf_aid_1(num);
							break;
					case 's':
						string = va_arg(ptr, str);
					if (string == NULL)
						{
						string = "(null)";
						}
						write(1, string, strlen(string));
						count += strlen(string);
						break;
					case '%':
						s = '%';
						_putchar(s);
						count++;
						break;
						default:
						_putchar('%');
						_putchar(format[i]);
						count += 2;
				}
	return (count);
}

