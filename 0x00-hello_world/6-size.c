#include <stdio.h>

/**
 * main - Entry point
 *
 * @c - holds char data type
 * @i - holds int data type
 * @li - holds long int data type
 * @lli -holds long long int data type
 * @f - holds float data type
 *
 *print size of a data type: in byte(s)
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	int i;
	long int li;
	long long int lli;
	float f;

	printf("Size of a char: %li byte(s)\n", sizeof(c));
	printf("Size of an int: %li byte(s)\n", sizeof(i)); 
	printf("Size of a long int: %li byte(s)\n", sizeof(li)); 
	printf("Size of a long long int: %li byte(s)\n", sizeof(lli)); 
	printf("Size of a float: %li byte(s)\n", sizeof(f)); 
	return (0);
}
