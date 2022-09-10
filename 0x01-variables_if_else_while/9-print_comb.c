#include <stdio.h>

/**
 * main - print cominbation of single digit
 *
 * Description: using the main function
 * this program prints programming print combination of single digit
 * Return: 0
 */

int main(void)
{

	int i;

	for (i = 20; i < 40; i++)
	{
		putchar((i % 20) + '0');
	if (i != 39)
	{
		putchar(',');
		putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
