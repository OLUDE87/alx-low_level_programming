#include "main.h"

/**
 * print_last_digit -> print the last digits
 * @n: argument parameter
 * Return: return last digit
 */
int print_last_digit(int n)
{
	int r;

	if (n < 0)
	n = -n;
	r = n % 10;
	_putchar(r + '0');
	return (r);
}
