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

	int c;

	for (c = 48; c <= 57; c++)
		putchar(c);
	if (c != 57)
		putchar(',');
		putchar(' ');
	putchar('\n');
	return (0);
}
