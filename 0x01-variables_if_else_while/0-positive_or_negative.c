#include <stdlib.h>

#include <time.h>

/* more headers goes there */



/* betty style doc for function main goes there */

int main(void)

{

	int n;


	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	if (n > 0)
	{
		printf("if the number is greater than 0: %\n", n is positive);
	} else if (n == 0)
	{
		printf("if the number is 0: %\n", n is zero);
	} else if (n < 0)
	{
		printf("if the number is less than 0: %\n", n is negative);
	}
	return (0);
}
