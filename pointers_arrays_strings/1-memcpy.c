#include "main.h"

/**
 * _memcpy - Copia un área de memoria
 * @dest: puntero destino
 * @src: puntero origen
 * @n: número de bytes a copiar
 *
 * Return: puntero al destino (dest)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
