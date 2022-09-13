#include "main.h"

/**
 * _isalpha -> check for alphabetic character
 *  @c: a character to be check
 *  Return: 0 or 1 depending on the condition
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));

}
