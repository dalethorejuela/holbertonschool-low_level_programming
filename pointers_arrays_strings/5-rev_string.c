#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: Pointer to string '\0'.
 *
 * Return: N.
 */
void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	char temp;

	while (s[j] != '\0')
	{
		j++;
	}
	j--;

	while (i < j)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i++;
		j--;
	}
}
