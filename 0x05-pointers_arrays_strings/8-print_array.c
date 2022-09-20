#include "main.h"
#include <stdio.h>

/**
 * print_array - print an array
 * @a: stores an integer
 * @n: stores an integer
 *
 * does not return a value
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		printf("%d, ", a[i]);
		if (i == n - 1)
		{
			printf("%d\n", a[i]);
		}
	}
	printf("\n");
}
