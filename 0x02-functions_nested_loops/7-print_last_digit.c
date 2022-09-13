#include "main.h"

/**
 * print_last_digit -> print the last digits
 * @n: argument parameter
 * Return: return last digit
 */
int print_last_digit(int n)
{
	int x;

	x = (n % 10);

	if (x < 0)
	{
		x = (-1 * n);
	}
	_putchar(x + '0');
	return (x);
}
