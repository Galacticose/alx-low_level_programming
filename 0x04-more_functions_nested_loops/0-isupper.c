#include "main.h"
#include <ctype.h>

/**
 * _isupper - check if a character is uppercase
 * @c: stores an integer value
 *
 * Return: Always c
 */
int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (c);
}
