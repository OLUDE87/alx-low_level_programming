#include "mian.h"
#include <string.h>
#include <stdio.h>
/**
 * *_strcat - this is a function strcat
 * @dest: first param
 * @src: second param
 * Return: a string
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, len = 0;

	while (dest[i++])
		len++;

	for (i = 0; src[i]; i++)
		dest[len++] = src[i];

	return (dest);
}
