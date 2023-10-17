#include "main.h"

/**
 * print_lm1 - function that modifies the length of an integer
 *
 * Return: long integer
 */

int print_lm1(va_list args)
{
	int n;
	long int ln;
	if (length == 'l')
	{
		ln = va_arg(args, long int);
	}
	else
	{
		n = va_arg(args, int);
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
	short int hn;

	if (length == 'h')
	{

		hn = va_arg(args, short int);
	}
	else
	{
		n = va_arg(args, int);
	}
}
