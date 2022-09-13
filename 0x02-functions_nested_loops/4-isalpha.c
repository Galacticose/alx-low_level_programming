#include "main.h"
#include <ctype.h>
/**
 *_isalpha - check if a variable is an alphabet
 *@c: stores an integer value
 *
 * Return: Always 1 when alphabet otherwise 0
 */

int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
