#include "main.h"

/**
 * _strcat - Concatenates the string pointed to by @src
 *	 null byte, to the end of the string pointed to by @dest.
 * @dest: first param
 * @src: second param
 *
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
