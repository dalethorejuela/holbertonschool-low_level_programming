#include "main.h"

/**
 * _puts - print a string followed of new line.
 * @str: Pointer to string end '\0'.
 *
 * Return: n.
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
