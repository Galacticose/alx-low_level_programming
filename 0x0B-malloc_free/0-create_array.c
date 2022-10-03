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
	unsigned int i;

	arr = malloc(sizeof(char) * size);
	while (1)
	{
		if (size == 0)
		{
			return ('\0');
		}
		else if (arr == NULL)
		{
			return ('\0');
		}
		else
		{
			for (i = 0 ; i < size ; i++)
			{
				arr[i] = c;
			}
			return (arr);
		}
	}
	free(arr);
}
