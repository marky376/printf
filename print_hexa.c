#include "main.h"

/**
 * print_hexa - converts the given number to hectadecimal number system
 * @val: the various arguments in the program's function
 *
 * Return: the h_count(hectadecimal count)
 */

int print_hexa(va_list val)
{
	int y, h_count = 0;
	unsigned int hex = va_arg(val, unsigned int);
	unsigned int work = hex;
	int *array;

	while (hex / 16 != 0)
	{
		hex = hex / 16;
		h_count++;
	}
	h_count++;

	array = malloc(sizeof(int) * h_count);

	for (y = 0; y < h_count; y++)
	{
		array[y] = work % 16;
		work = work / 16;
	}
	for (y = h_count - 1; y >= 0; y--)
	{
		if (array[y] > 9)
		{
			array[y] = array[y] + 39;
		}
		_putchar(array[y] + '0');
	}
	free(array);

	return (h_count);
}
