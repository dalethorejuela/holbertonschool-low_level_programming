#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase
 *
 * Description: uses _putchar only twice
 *
 * Return: void
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
