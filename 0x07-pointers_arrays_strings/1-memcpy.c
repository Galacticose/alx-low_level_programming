#include "main.h"
#include <string.h>

/**
 * _memcpy - copies memory area
 * @dest: stores a character being copied
 * @src: source of a character being copied
 * @n: size of the byte
 *
 * Return: copied memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
