#include "main.h"

/**
 * leet - Encodes a string into 1337
 * @s: Pointer to string
 *
 * Description: Letters are replaced as follows:
 * a/A -> 4, e/E -> 3, o/O -> 0, t/T -> 7, l/L -> 1
 *
 * Return: Pointer to modified string
 */
char *leet(char *s)
{
	int i, j;
	char letters[] = "aAeEoOtTlL";
	char codes[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; letters[j] != '\0'; j++)
		{
			if (s[i] == letters[j])
			{
				s[i] = codes[j];
			}
		}
	}
	return (s);
}
