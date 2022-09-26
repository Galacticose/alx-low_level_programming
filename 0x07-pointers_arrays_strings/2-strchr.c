#include "main.h"
#include <string.h>

/**
 * _strchr - locates a character in a string
 * @s: stores the string
 * @c: stores a character
 *
 * Return: located character in string
 */
char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}
