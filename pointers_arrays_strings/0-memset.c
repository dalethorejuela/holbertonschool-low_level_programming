#include "main.h"

/**
 * _memset - Rellena un área de memoria con un byte constante
 * @s: puntero al área de memoria
 * @b: byte constante usado para llenar
 * @n: número de bytes a llenar
 *
 * Return: puntero al área de memoria (s)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
