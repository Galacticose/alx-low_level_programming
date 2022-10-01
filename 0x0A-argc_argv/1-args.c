#include <stdio.h>

/**
 * main - entry point
 * @argc: first operand stores an integer
 * @argv: second operand stores a character
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0 ; i < argc ; i++)
	{
		argv[argc] = argv[i];
	}
	printf("%i\n", i - 1);
	return (0);
}
