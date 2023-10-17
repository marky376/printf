#include "main.h"
/**
 * print_w - prints a character
 * @val: The given arguments in the function
 *
 * Return: always 1
 */

int print_w(va_list val)
{
	char str;

	str = va_arg(val, int);
	_putchar(str);
	return (1);
}
