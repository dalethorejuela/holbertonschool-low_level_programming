#include "main.h"

/**
 * swap_int - Intercambia los valores de dos enteros.
 * @a: Puntero al primer entero.
 * @b: Puntero al segundo entero.
 *
 * Return: Nada.
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
