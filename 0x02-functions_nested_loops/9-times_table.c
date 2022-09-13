#include "main.h"

/**
 * times_table -> print the 9 times table, starting with 0
 * i = row, j = column, d = digits of current result
 * Return: time table
 * add extra space past single digit
 */
void times_table(void)
{
	int i;
	int j;
	int d;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');
		
		for (j = 1; j <= 9; j++)
		{
			_putchar(',');
			_putchar(' ');

			d = (i * j);

			if (d <= 9)
				_putchar(' ');
			else
				_putchar((d / 10) + '0');

			_putchar((d % 10) + '0');
		}
		_putchar('\n');
	}
}
