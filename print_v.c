#include "main.h"
/**
 * print_v - prints a given string
 * @val: the given arguments
 *
 * Return: the length of the given string
 */

int print_v(va_list val)
{
	char *str;
	int length, m;

	str = va_arg(val, char *);
	if (str == NULL)
	{
		str = "(null)";
		length = _strlen(str);
		for (m = 0; m < length; m++)
		{
			_putchar(str[m]);
		}
		return (length);
	}

	else
	{
		length = _strlen(str);
		for (m = 0; m < length; m++)
		{
			_putchar(str[m]);
		}

		return (length);
	}
}
