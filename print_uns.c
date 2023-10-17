#include "main.h"

/**
 * print_uns - prints an unsigned integer
 * @args: arguments to be printed by the program
 *
 * Return: the number of characters printed by the program
 */

int print_uns(va_list args)
{
	unsigned int r = va_arg(args, unsigned int);
	int d = 0;
	unsigned int ex = 1;
	unsigned int digit = r / ex;

	if (r == 0)
	{
		_putchar('0');
		return (1);
	}


	while (r / ex >= 10)
	{
		ex *= 10;
	}

	while (ex > 1)
	{
		digit = (r / ex) % 10;
		_putchar(digit + '0');
		d++;
		ex /= 10;
	}

	return (d);
}
