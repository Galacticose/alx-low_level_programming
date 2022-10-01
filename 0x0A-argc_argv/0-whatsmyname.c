#include <stdio.h>

/**
 * main - Entry point
 * @argc: stores an integer
 * @argv[]: stores a chracter
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
