#include "main.h"

/**
 * print_last_digit -> print the last digits
 * @l: argument parameter
 * Return: return last digit
 */
int print_last_digit(int l)
{
	int r;

	if (l < 0)
	l = -l;
	r = (l % 10);
	_putchar(r + '0');
	return (r);
}
