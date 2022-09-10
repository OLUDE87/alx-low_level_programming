#include <stdio.h>

/**
 * main - print alphabet
 *
 * Description: using the main function
 * the program prints programming the print alphabet
 * Return: 0
 */

int main(void)
{

	char a;

	for (a = 'a' ; a <= 'z' ; a++)
	{

	if (a == 'q' || a == 'e')
		{
			putchar(a);
		}
	}
	putchar('\n');
	return (0);
}
