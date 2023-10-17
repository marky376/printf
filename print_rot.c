#include "main.h"

/**
 * print_rot - function that converts to a rot number
 * @val: the given arguments in the program
 *
 * Return: the rot13'ed number
 */

int print_rot(va_list val)
{
	int a, r_count = 0;
	char *t = va_arg(val, char *);
	char *alphabets = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *rot13 = "NOPQRSTUVWXYZABCDEFGHIJKLMNopqrstuvwxyzabcdefghijklm";
	int j;

	if (t == NULL)
	{
		t = "(nil)";
	}

	for (a = 0; t[a]; a++)
	{
		char c = t[a];

		for (j = 0; alphabets[j]; j++)
		{
			if (c == alphabets[j])
			{
				_putchar(rot13[j]);
				r_count++;
				break;
			}
		}
		if (!alphabets[j])
		{
			_putchar(c);
			r_count++;
		}
	}

	return (r_count);
}
