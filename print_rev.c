#include "main.h"

/**
 * print_rev - a function that prints any given string in reverse format
 * @val: the arguments in the given program
 *
 * Return: the reversed string format
 */

int print_rev(va_list val)
{
	char *t = va_arg(val, char *);
	int i;
	int rv = 0;

	if (t == NULL)
	{
		t = "(nil)";
	}
	while (t[rv] != '\0')
	{
		rv++;
	}
	for (i = rv - 1; i >= 0; rv--)
	{
		_putchar(t[rv]);
	}

	return (rv);
}

