#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array
 * @size: size of array
 * @c: stores a character
 *
 * Return: a character
 */
char *create_array(unsigned int size, char c)
{
	char *arr;

	arr = malloc(sizeof(char) * size);
	arr[0] = c;
	if (size == 0)
	{
		return ('\0');
	}
	else
	{
		return (arr);
	}
}
