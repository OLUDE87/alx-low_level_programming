#include <stdio.h>

/**
 * main - print combination of three digits
 *
 * Description: using the main function
 * this program prints programming print combination of three digits
 * Return: 0
 */

int main(void)
{
	int i;
	int j;
	int k;

	for (i = 0 ; i < 8 ; i++)
	{
		for (j = 1 ; j < 9 ; j++)
		{
			for (k = 2 ; k < 10 ; k++)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');

				if (i == 7 && j == 8 && k == 9)
					continue;

				putchar(',');
				putchar(' ');

			}
		}
	}
	putchar('\n');
	return (0);
}

