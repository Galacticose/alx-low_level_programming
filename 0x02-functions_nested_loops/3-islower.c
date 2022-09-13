#include "main.h"
#include <ctype.h>
/**
 * _islower - checks for lower case character
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
