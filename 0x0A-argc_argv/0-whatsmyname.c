#include <stdio.h>

/**
 * main - Entry point
 * @argc: size of array
 * @argv: name of array
 *
 * Return: Always 0 (success)
 */
int main (int argc, char *argv[])
{
	int i;

	for (i = 0 ; i < argc ; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
