#include <stdio.h>

/**
 * main - Prints first 50 Fibonacci numbers, starting with 1 and 2,
 *
 * Return: 0
 */
int main(void)
{
	int i;
	unsigned long fib1 = 0, fib2 = 1, j;

	for (i = 0; i < 50; i++)
	{
		j = fib1 + fib2;
		printf("%lu", j);

		fib1 = fib2;
		fib2 = j;

		if (i == 49)
			printf("\n");
		else
			print(", ");
	}
	return (0);
}
