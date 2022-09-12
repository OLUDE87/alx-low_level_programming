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

	for (i = 0 ; i < 8 i++)
	{
		for (j = 1 ; j < 9 ; j++)
		{
			putchar( i + '0');
			putchar( j + '0');

			if (i == 7 || j == 8)

			putchar(',');
			putchar(' ');

		}

	}
	putchar('\n')
	return (0);
}
