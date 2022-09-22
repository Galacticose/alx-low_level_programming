#include "main.h"
#include <string.h>

/**
 * _strncpy - copies a string
 * @dest: stores a character
 * @src: stores a character
 * @n: stores an integer
 *
 * Return: copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
