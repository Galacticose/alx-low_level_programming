#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: first operand that stores an integer
 * @argv: second operand that stores a character
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%i\n", atoi(argv[argc - 1]) * atoi(argv[argc - 2]));
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}
