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
		printf("if the number is greater than %d : is positive\n", n);
	} else if (n == 0)
	{
		printf("if the number is %d : is zero\n", n);
	} else if (n < 0)
	{
		printf("if the number is less than %d : is negative\n", n);
	}
	return (0);
}
