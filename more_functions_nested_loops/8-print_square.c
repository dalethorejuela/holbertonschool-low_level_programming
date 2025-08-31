#include "main.h"

/**
 * print_square - Prints a square, followed by a new line.
 * @size: The size of the square.
 *
 * Description: If size is 0 or less, only '\n' is printed.
 * The square is printed using the character '#'.
 */
void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
