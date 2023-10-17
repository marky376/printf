#include "main.h"

/**
 * _strlen - returns the length of a given string
 * @str: the pointer to the string
 *
 * Return: always 1
 */

int _strlen(char *str)
{
	int k;

	while (str[k] != 0)
	{
		k++;
	}

	return (k);
}

/**
 * _strlenx - an advanced use of _strlen when a constant char pointer
 * is used
 * @str: the pointer to the string
 *
 * Return: always 1
 */

int _strlenx(const char *str)
{
	int k = 0;

	while (str[k] != 0)
	{
		k++;
	}

	return (k);
}
