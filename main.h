#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <string.h>
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <unistd.h>
int _printf(const char *format, ...);

int _putchar(char c);
int _printf_aid(const char *format, va_list ptr);
int _printf_aid_1(const char *format, va_list ptr);
int print_integer(int n);
int print_binary(unsigned int n);
int _printf_aid_2(const char *format, va_list ptr);
int refactor_printf(const char *format, va_list ptr);
int ret_uns(unsigned int num);
int handle_uns(const char *format, va_list ptr);
typedef char *str;











#endif
