#include "main.h"
#include <string.h>
#include <ctype.h>

/**
 * string_toupper - changes a string to uppercase
 * @s: name of array
 *
 * Return: uppercase string
 */
char *string_toupper(char *s)
{
	int i;
	int n;

	n = strlen(s);
	for (i = 0 ; i < n ; i++)
	{
		if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
		{
			s[i] = toupper(s[i]);
		}
	}
	return (s);
}
