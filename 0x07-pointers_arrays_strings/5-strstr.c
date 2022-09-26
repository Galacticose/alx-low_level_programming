#include "main.h"
#include <string.h>

/**
 * _strstr - locates a substring
 * @haystack: stores a character
 * @needle: stores a character
 *
 * Return: Located substring
 */
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
