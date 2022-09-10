#include <stdio.h>

/**
 * main - print alphabt
 *
 * Description: using the main function
 * this program prints programming the print alphabt
 * Return: 0
 */

int main(void)
{

	char a;

	for (a = 'a' ; a <= 'z' ; a++)
	{

	if (a != 'e' && a != 'q')
		{
			putchar(a);
		}
	}
	putchar('\n');
	return (0);
}
