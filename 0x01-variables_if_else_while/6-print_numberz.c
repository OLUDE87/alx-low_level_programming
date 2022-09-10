#include <stdio.h>

/**
 * main - print numberz
 *
 * Description: using the main function
 * this program prints programming print numberz
 * Return: 0
 */

int main(void)
{

	int i = 0;

	for (; i < 10 ; i++)
		putchar('0' + i);
	putchar('\n');
	return (0);
}
