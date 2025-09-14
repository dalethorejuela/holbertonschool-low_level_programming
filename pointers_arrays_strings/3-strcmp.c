#include "main.h"

/**
 * _strcmp - Compara dos cadenas de caracteres
 * @s1: primera cadena
 * @s2: segunda cadena
 *
 * Return: 0 si las cadenas son iguales,
 * un número negativo si s1 < s2,
 * un número positivo si s1 > s2
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}
