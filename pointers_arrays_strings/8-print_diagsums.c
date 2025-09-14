#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Imprime la suma de las dos diagonales
 * de una matriz cuadrada de enteros
 * @a: puntero a la primera posición de la matriz
 * @size: tamaño de la matriz (número de filas/columnas)
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i];           /* diagonal principal */
		sum2 += a[i * size + (size - 1 - i)]; /* diagonal secundaria */
	}

	printf("%d, %d\n", sum1, sum2);
}
