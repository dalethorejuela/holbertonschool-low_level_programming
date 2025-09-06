#include "main.h"

/**
 * _strlen - calculates the length of a string.
 * @s: pointer to string ends '\0'.
 *
 * Return: characters of string.
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
