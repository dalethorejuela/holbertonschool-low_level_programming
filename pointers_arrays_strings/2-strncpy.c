#include "main.h"

/**
 * _strncpy - Copia hasta n caracteres de una cadena a otra
 * @dest: destino de la copia
 * @src: origen de la copia
 * @n: número máximo de caracteres a copiar
 *
 * Return: puntero al destino (dest)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
