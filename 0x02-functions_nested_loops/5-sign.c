#include "main.h"

/**
 * print_sign -> prints the sign of a number
 * @n: a character of argument
 *
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else 
	{
		_putchar('_');
		return(-1);
	}
}
