#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <limits.h>
int print_Hexa_2(unsigned int Hex);
int print_Str(va_list val);
int _printf(const char *format, ...);
int _putchar(char c);
int print_w(va_list val);
int print_v(va_list val);
int _strlenx(const char *str);
int _strlen(char *str);
int print_mod(void);
int print_dec(va_list args);
int print_integer(va_list args);
int print_bit(va_list val);
int print_uns(va_list args);
int print_octal(va_list val);
int print_hexa(va_list val);
int print_Hexa(va_list val);
int print_point(va_list val);
int print_Hexa_3(unsigned long int hex);
int print_rev(va_list val);
int print_rot(va_list val);
typedef struct format
{
	char *bro;
	int (*m)();
} link;
int print_command(void);
int print_plus(void);
int print_spa(void);
#endif
