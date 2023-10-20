#include "main.h"

/**
 * print_dec - prints the given decimal
 * @args: the arguments to be printed by the program
 *
 * Return: the amount of decimal numbers to be printed
 */

int print_dec(va_list args)

{
	int n = va_arg(args, int);
	int sit, dig, exp = 1;
	int d = 0;
	int b = n;

	if (n < 0)
	{
		_putchar('-');
		b = -n;
	}

	sit = b;

	if (sit == 0)
	{
		_putchar('0');
		return (1);
	}

	while (exp <= b)
	{
		exp *= 10;
	}
	while (exp > 1)
	{
		exp /= 10;
		dig = sit / exp;
		_putchar(dig + '0');
		sit %= exp;
		d++;
	}

	return (d);
}

