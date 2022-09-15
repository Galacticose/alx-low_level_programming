#include "main.h"
#include <ctype.h>

/**
 * _isdigit - check if a character is a digit
 *
 * Return: Always c
 */
int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (c);
}
