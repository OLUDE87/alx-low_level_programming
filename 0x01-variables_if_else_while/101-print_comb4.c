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

	for (i=0 ; i < 8 ; i++)
	{
		for (j = 0 ; j < 9 ; j++)
		{
			for (k = 0 ; k < 10 ; K++)
			{
				putchar((i % 10) + '0');
				putchar((j % 10) + '0');
				putchar((k % 10) + '0');

				if (i == 7 || j == 8 || k == 9)
				putchar(',');
				putchar(' ');

			}
		}
	}
	putchar('\n');
	return (0);
}

