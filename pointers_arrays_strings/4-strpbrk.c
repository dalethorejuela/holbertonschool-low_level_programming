#include "main.h"

/**
 * _strpbrk - Busca en una cadena el primer byte
 * que coincida con cualquiera de un conjunto dado
 * @s: cadena en la que se busca
 * @accept: conjunto de caracteres a localizar
 *
 * Return: puntero al primer byte en s que coincide
 * con uno de accept, o NULL si no se encuentra
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}

	return (0);
}
