#include "main.h"
#include <string.h>

/**
 * _strncat - concatenates two strings
 * @dest: stores a character
 * @src: stores a character
 * @n: stores an integer
 *
 * Return: concatenated strings
 */
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
