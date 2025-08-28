#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the alphabet in lowercase except q and e,
 * followed by a new line. Uses only putchar twice.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	for(ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' && ch != 'q')
			putchar(ch);
	}
	putchar('\n');

	return (0);
}
