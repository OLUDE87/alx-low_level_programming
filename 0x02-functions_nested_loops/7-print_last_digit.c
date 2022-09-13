#include "main.h"

/**
 * print_last_digit -> print last digits of a number
 * @n: argument parameter
 * Return: return last digits
 */
int print_last_digit(int l)
{
	int r;

	if (l < 0)
	l = -l;
	r = n % 10;
	_putchar(r + '0');
	return (r);
}
