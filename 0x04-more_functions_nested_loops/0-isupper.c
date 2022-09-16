#include "main.h"
#include <stdio.h>

/**
 * _isupper - print upper case character
 * @c: argument parameter
 * Return: 0 and 1 depending on the condition
 */

int _isupper(int c)
{
	if (( c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
