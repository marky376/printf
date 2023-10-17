#include "main.h"

/**
 * _printf - a custom printf
 * @format: struct identifier
 *
 * Return: the given integer
 */

int _printf(const char *format, ...)
{
	link l[] = {
		{"%c", print_w}, {"%s", print_v}, {"%%", print_mod},
		{"%d", print_num2}, {"%i", print_num}, {"%u", print_uns},
		{"%S", print_Str}, {"%b", print_bit}, {"%o", print_octal},
		{"%x", print_hexa}, {"%X", print_Hexa}, {"%R", print_rot},
		{"%p", print_point}, {"%r", print_rev}
	};

	va_list args;
	int a = 0, len = 0, b;

	va_start(args, format);

	if (format == NULL || (format[0] == '%' && format[a] == '\0'))
	{
		return (-1);
	}

	while (format[a] != '\0')
	{
		b = 13;
		while (b >= 0)
		{
			if (l[b].bro[0] == format[a] && l[b].bro[1] == format[a + 1])
			{
				len = len + l[b].m(args);
				a = a + 2;
			}
			b--;

		}
		_putchar(format[a]);
		a++;
		len++;
	}
	va_end(args);

	return (len);

}
