#include <stdio.h>

/**
 * main - print Hexadecimal
 *
 * Description: using the main function
 * this program prints programming print hexadecimal
 * Return: 0
 */

int main(void)
{

	unsigned char a = '0';
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
	putchar(a);
	a++;
	}
	for (i = 0 ; i < 6 ; i++)
	{
	putchar('0' + a);
		a++;
	}
	putchar('\n');
	return (0);
}
