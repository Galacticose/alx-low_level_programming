#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a new string
 * @str: stores a character
 *
 * Return: A pointer to a new string
 */
char *_strdup(char *str)
{
	return (strdup(str));
	if (strdup(str) == NULL)
	{
		return ('\0');
	}
}
