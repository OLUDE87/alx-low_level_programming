#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print The last digit
 *
 * Description: using the main function
 * this program prints programming the last digit
 * Return: 0
 */

int main(void)

{
	int n;
	int l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;
	/* your code goes there */
	if (n > 5)
	{
		printf("%d and is greater than 5\n", n);
	} else if (n == 0)
	{
		printf("%d and is 0\n", n);
	} else
	{
		printf("%d is less than 6 and not 0\n", n);
	}
	return (0);
}

