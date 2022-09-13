#include "main.h"

/**
 * jack_bauer -> print every minuites
 * h = hour, m = minutes
 * Return: 24 hour clock line by line
 */
void jack_bauer(void)
{
	int h;
	int m;

	for (h = 0; h < 24; h++)
	{
		for (m = 0; m < 60; m++)
		{
			_putchar((h / 10) + '0');
			_puthcar((h % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
		}

	}
	putchar('\n')

}
