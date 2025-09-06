#include "main.h"

/**
 * swap_int - Changes value of int.
 * @a: Pointer to first int.
 * @b: Pointer to second int.
 *
 * Return: N
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
