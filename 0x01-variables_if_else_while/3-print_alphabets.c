#include <stdio.h>

/**
 * main - print alphBET
 *
 * Description: using the main function
 * this program prints programming the print alphabet in lowercase and uppercase
 * Return: 0
 */

int main(void)
{

	char c;

	for (c = 'a' ; c <= 'z' ; c++)
		putchar(c);
	for (c = 'A' ; c <= 'Z' ; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
