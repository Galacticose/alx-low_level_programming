#include "main.h"
#include <string.h>

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: stores a character
 * @accept: stores a character
 *
 * Return: searched string for a set of bytes
 */
char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
