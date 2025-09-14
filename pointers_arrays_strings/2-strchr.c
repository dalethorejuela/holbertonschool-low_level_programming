#include "main.h"

/**
 * _strchr - Localiza la primera ocurrencia de un carácter en una cadena
 * @s: puntero a la cadena
 * @c: carácter a localizar
 *
 * Return: puntero a la primera ocurrencia de c en s,
 * o NULL si no se encuentra
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	if (*s == c) /* caso en que c sea '\0' */
	{
		return (s);
	}

	return (0);
}
