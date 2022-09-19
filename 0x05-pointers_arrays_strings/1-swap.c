#include "main.h"

/**
 * swap_int - swaps value of two integers
 * @a: stores an integer value
 * @b: stores an integer value
 *
 * Does not return any value
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
