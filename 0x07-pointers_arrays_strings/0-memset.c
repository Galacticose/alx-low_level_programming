#include "main.h"
#include <string.h>

/**
 * _memset - fills memory with a constant byte
 * @s: memory area
 * @b: stores a char
 * @n: size of byte
 *
 * Return: pointer to memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
