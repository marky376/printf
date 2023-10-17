#include "main.h"

/**
 * print_Hexa - converts the given number to
 * hectadecimal number system in uppercase format
 * @val: the various arguments in the program's function
 *
 * Return: the H_count(hectadecimal count)
 */

int print_Hexa(va_list val)
{
	int y, H_count = 0;
	unsigned int Hex = va_arg(val, unsigned int);
	unsigned int work = Hex;
	int *array;

	while (Hex / 16 != 0)
	{
		Hex = Hex / 16;
		H_count++;
	}
	H_count++;

	array = malloc(sizeof(int) * H_count);

	for (y = 0; y < H_count; y++)
	{
		array[y] = work % 16;
		work = work / 16;
	}
	for (y = H_count - 1; y >= 0; y--)
	{
		if (array[y] > 9)
		{
			array[y] = array[y] + 7;
		}
		_putchar(array[y] + '0');
	}
	free(array);
	return (H_count);
}
