#include "main.h"
/**
 * print_Str - prints a modified string
 * @val: the arguments given in the program
 *
 * Return: always the number of arguments printed
 */

int print_Hexa_2(unsigned int Hex);
int print_Str(va_list val)
{
	char *l = va_arg(val, char *);
	int len = 0;

	if (l == NULL)
	{
		l = "(null)";
	}
	while (*l)
	{
		if (*l < 32 || *l >= 127)
		{

			_putchar('\\');
			_putchar('x');
			len += 2;

			if (*l < 16)
			{
				_putchar('0');
				len++;
			}

			len += print_Hexa_2(*l);
		}
		else
		{
			_putchar(*l);
			len++;
		}
		l++;
	}
	return (len);
}
