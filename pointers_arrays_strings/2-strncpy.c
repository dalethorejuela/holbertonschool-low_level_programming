#include "main.h"

/**
 * _strncpy - Copies a string
 * @dest: Pointer to destination buffer
 * @src: Pointer to source string
 * @n: Maximum number of bytes to copy
 *
 * Description: Works exactly like strncpy.
 * If src is less than n characters long, the remainder of dest
 * is filled with '\0' characters.
 * Otherwise, dest is not null-terminated if src has n or more characters.
 *
 * Return: Pointer to destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
