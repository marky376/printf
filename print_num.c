#include "main.h"

/**
 * print_integer - prints the given integer
 * @args: the arguments to be printed by the program
 *
 * Return: the number of numbers to be printed
 */

int print_integer(va_list args)
{
	int n = va_arg(args, int);
	int sit, dig, exp = 1;
	int i = 0;
	int b = n;
	

	if (n < 0)
	{
		_putchar('-');
		b = -n;
	}
	sit = b;

	while (sit > 0)
	{
		sit = sit / 10;
		exp = exp * 10;
	}
	sit = b;

	while (exp > 0)
	{
		dig = sit / exp;
		_putchar(dig + '0');
		sit = sit - (dig * exp);
		exp = exp / 10;
		i++;
	}

	return (i);
}
