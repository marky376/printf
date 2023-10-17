#include "main.h"
/**
 * print_point - a pointer is printed
 * @val: the arguments in the program
 *
 * Return: a certain type of integer(unsigned long int)
 */

int print_point(va_list val)
{
	void *t = va_arg(val, void *);

	if (t == NULL)
	{
		char *s = "(nil)";
		int pnt;

		for (pnt = 0; s[pnt] != 0; pnt++)
		{
			_putchar(s[pnt]);
		}
		return (pnt);
	}
	_putchar('0');
	_putchar('x');

	return (print_Hexa_3((unsigned long int)t) + 2);
}
