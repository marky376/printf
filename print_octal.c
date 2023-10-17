#include "main.h"

/**
 * print_octal - converts the given number to octal number system
 * @val: the various arguments in the program's function
 *
 * Return: the o_count(octal count)
 */

int print_octal(va_list val)
{
	int y, o_count = 0;
	unsigned int oct = va_arg(val, unsigned int);
	unsigned int work = oct;
	int *array;

	while (oct / 8 != 0)
	{
		oct = oct / 8;
		o_count++;
	}
	o_count++;

	array = malloc(sizeof(int) * o_count);

	for (y = 0; y < o_count; y++)
	{
		array[y] = work % 8;
		work = work / 8;
	}
	for (y = o_count - 1; y >= 0; y--)
	{
		_putchar(array[y] + '0');
	}
	free(array);

	return (o_count);

}
