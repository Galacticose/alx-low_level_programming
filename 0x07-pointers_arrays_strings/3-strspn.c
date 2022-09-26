#include "main.h"
#include <string.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: stores a character
 * @accept: stores a character
 *
 * Return: length of a prefix substring
 */
unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
