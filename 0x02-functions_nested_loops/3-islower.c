#include "main.h"
/**
 * _islower - checks for lower case character
 */
int _islower(int c)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		if (c == ch)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}
