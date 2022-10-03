#include "main.h"
#include <string.h>

/**
 * _strdup - returns a pointer to a new string
 * @str: stores a character
 *
 * Return: A pointer to a new string
 */
char *_strdup(char *str)
{
	if (*strdup(str) == '\0')
	{
		return (NULL);
	}
	else
	{
		return (strdup(str));
	}
}
