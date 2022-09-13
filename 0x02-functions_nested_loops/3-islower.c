#include "main.h"
#include <ctype.h>
/**
 * _islower - checks for lower case character
 * @c: stores an integer value
 *
 * Return: for lower case always 1 otherwise 0
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
