#include "main.h"

/**
 * print_triangle - Prints a triangle, followed by a new line.
 * @size: The size of the triangle.
 *
 * Description: If size is 0 or less, only '\n' is printed.
 * The triangle is printed using the character '#'.
 */
void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 0; j < (size - i); j++)
				_putchar(' ');
			for (j = 0; j < i; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
