#include <stdio.h>
#include "main.h"

/**
 * print_mumbers - function print numbers from  0 to 9
 * Return: nothing
 */

void print_numbers(void)
{
	int i;
	
	for (i = 0; i <= 9; i++)
	{
		putchar(i);
	}
	putchar('\n');
}
