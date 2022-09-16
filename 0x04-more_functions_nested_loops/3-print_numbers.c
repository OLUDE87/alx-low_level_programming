#include "main.h"

/**
 * print_mumbers - function print numbers from  0 to 9
 * Return: nothing
 */

void print_numbers(void)
{
	int i;
	
	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	putchar(10);
}
