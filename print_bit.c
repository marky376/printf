#include "main.h"

/**
 * print_bit - converts data into binary
 * @val: the arguments in the program
 *
 * Return: an integer in binary form
 */

int print_bit(va_list val)
{
	int y = 0;
	int z = 0;
	int a, b = 1;
	unsigned int exr = va_arg(val, unsigned int);
	unsigned int rxr;
	int d;

	for (a = 0; a < 32; a++)
	{
		rxr = ((b << (31 - a)) & exr);
		if (rxr >> (31 - a))
		{
			y = 1;
		}
		if (y)
		{
			rxr = rxr >> (31 - 1);
			d = rxr & 1;
			_putchar(d + '0');
			z++;
		}
	}
	if (z == 0)
	{
		z++;
		_putchar('0');
	}

	return (z);
}
