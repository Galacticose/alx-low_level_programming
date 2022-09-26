#include "main.h"
#include <string.h>

/**
 * _memcpy - copies memory area
 * @dest:
 * @src:
 * @n:
 *
 * Return: copied memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
