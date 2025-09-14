#include "main.h"

/**
 * _strstr - Localiza una subcadena dentro de otra
 * @haystack: cadena principal en la que buscar
 * @needle: subcadena a localizar
 *
 * Return: puntero al inicio de la subcadena localizada,
 * o NULL si no se encuentra
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	if (*needle == '\0')
	{
		return (haystack);
	}

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}
		}
		if (needle[j] == '\0')
		{
			return (haystack + i);
		}
	}

	return (0);
}
