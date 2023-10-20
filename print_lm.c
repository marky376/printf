#include "main.h"

/**
 * print_lm1 - function that modifies the length of an integer
 *
 * Return: long integer
 */

int print_lm1(va_list args)
{	
	char length = 'l';
	int n;
	long int ln;

	if (length == 'l')
	{

		ln = va_arg(args, long int);
		_putchar(ln + '0');
		return (0);
	}
	else
	{
		n = va_arg(args, int);
		_putchar(n + '0');
		return (0);
	}
}

/**
 * print_lm2 - function that modifies the length of an integer
 * short int
 *
 * Return: short integer
 */

int print_lm2(va_list args)
{
	int n;
	char length = 'h';
	int hn;

	if (length == 'h')
	{

		hn = va_arg(args, int);
		_putchar(hn + '0');
		return (0);
	}
	else
	{
		n = va_arg(args, int);
		_putchar(n + '0');
		return (0);
	}
}
