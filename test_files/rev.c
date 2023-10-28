#include "main.h"
/**
 * rev - this function prints the string in reverse
 *@format: this is the string the format soecifier is passed
 *@ptr: the initializer
 *Return: the count of the printed sttring
 */
int rev(const char *format, va_list ptr)
{
	int count = 0, a = 0;
	str rev_str;

	if (*format && format[0] == 'r')
	{
		rev_str = va_arg(ptr, str);
		if (rev_str == NULL)
		{
			rev_str = "(null)";
			write(1, rev_str, strlen(rev_str));
			count += strlen(rev_str);
			return (count);
		}
		while (rev_str[a] != '\0')
		{
			a++;
		}
		a--;
		while (a >= 0)
		{
			_putchar(rev_str[a]);
			a--;
			count++;
		}
	}
	return (count);
}
