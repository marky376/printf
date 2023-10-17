#include "main.h"

/**
 * print_Hexa_3 - converts the given number to hectadecimal number system
 * @Hex: variable hex arguments
 * Return: the H_count(hectadecimal count)
 */

int print_Hexa_3(unsigned long int Hex)
{
	long int y, H_count = 0;
	unsigned int work = Hex;
	long int *array;

	while (Hex / 16 != 0)
	{
		Hex = Hex / 16;
		H_count++;
	}
	H_count++;

	array = malloc(sizeof(long int) * H_count);

	for (y = 0; y < H_count; y++)
	{
		array[y] = work % 16;
		work = work / 16;
	}
	for (y = H_count - 1; y >= 0; y--)
	{
		if (array[y] > 9)
		{
			array[y] = array[y] + 39;
		}
		_putchar(array[y] + '0');
	}
	free(array);

	return (H_count);
}
