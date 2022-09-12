#include <stdio.h>

/**
 * main - print combination of two digits
 *
 * Description: using the main function
 * this program prints programming print combination of two digits.
 * Return: 0
 */

int main(void)
{

	int i;
	int j;

	for (i = 0 ; i <= 98 ; i++)
	{
		for (j = i + 1 ; j <= 99 ; j++)
		{
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			putchar(' ');
			putchar((j / 10) + '0');
			putchar((j % 10) + '0');

			if (i == 98 && j == 99)
				continue;

			putchar(',');
			putchar(' ');

		}

	}
	putchar('\n');
	return (0);
}
