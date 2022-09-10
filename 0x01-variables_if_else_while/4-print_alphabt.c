#include <stdio.h>

/**
 * main - print alphabet
 *
 * Description: using main function
 * the program prints programming the print alphabet
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
