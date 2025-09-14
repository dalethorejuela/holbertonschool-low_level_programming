#include "main.h"

/**
 * _strspn - Obtiene la longitud del prefijo de una cadena
 * que contiene solo caracteres de otra cadena
 * @s: cadena de entrada
 * @accept: conjunto de caracteres permitidos
 *
 * Return: número de bytes en el segmento inicial de s
 * que solo contiene caracteres de accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, count;

	count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		int found = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				found = 1;
				break;
			}
		}
		if (!found)
			break;
		count++;
	}

	return (count);
}
