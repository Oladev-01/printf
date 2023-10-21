#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <string.h>
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <unistd.h>
int _printf(const char *format, ...);
int conv_octal(unsigned int);
int octal(const char *format, va_list ptr);
int _putchar(char c);
int _printf_aid(const char *format, va_list ptr);
int _printf_aid_1(const char *format, va_list ptr);
int print_integer(int n);
int print_binary(unsigned int n);
int _printf_aid_2(const char *format, va_list ptr);
int refactor_printf(const char *format, va_list ptr);
int refactor_printf_2(const char *format, va_list ptr);
int ret_uns(unsigned int num);
int handle_uns(const char *format, va_list ptr);
int hex_lower(const char *format, va_list ptr);
int conv_hex_lower(unsigned int num);
int hex_upper(const char *format, va_list ptr);
int conv_hex_upper(unsigned int num);
int check_for_non_print(const char *format, va_list ptr);
int address(const char *format, va_list ptr);
int find_address(void *pts);
int non_print(char *s);
typedef char *str;











#endif
