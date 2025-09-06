#include "main.h"

/**
 * puts2 - Prints every other character in a string.
 * @str: Pointer to string '\0'.
 *
 * Return: N.
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
