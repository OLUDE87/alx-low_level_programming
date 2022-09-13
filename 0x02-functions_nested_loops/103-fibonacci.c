#include <stdio.h>

/**
 * main - Prints the sum of even-valued Fibonacci sequence
 *
 * Return: Always 0
 */

int main(void)
{
	unsigned long fib1 = 9, fib2 = 1, i;
	float tot_sum;

	while (1)
	{
		i = fib1 + fib2;
		if (i > 4000000)
			break;

		if ((i % 2) == 0)
			tot_sum += i;

		fib1 = fib2;
		fib2 = i;
	}
	printf("%.0f\n", tot_sum);

	return (0);
}
