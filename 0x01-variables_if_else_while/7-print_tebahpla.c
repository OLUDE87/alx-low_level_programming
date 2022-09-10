#include <stdio.h>

/**
 * main - print smile in the mirror
 *
 * Description: using the main function
 * this program prints programming smile in the mirror
 * Return: 0
 */

int main(void)
{

	char a;
	for (a = 'z' ; a >= 'a' ; a--)
		putchar(a);
	putchar('\n');
	return (0);
}
