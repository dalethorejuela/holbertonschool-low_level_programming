#include "main.h"

/**
 * cap_string - Capitalizes all words of a string
 * @s: Pointer to string
 *
 * Description: Separators of words are:
 * space, tabulation, new line, ',', ';', '.', '!', '?',
 * '"', '(', ')', '{', and '}'.
 *
 * Return: Pointer to modified string
 */
char *cap_string(char *s)
{
	int i, j;
	char sep[] = {' ', '\t', '\n', ',', ';', '.', '!',
		'?', '"', '(', ')', '{', '}'};

	i = 0;
	while (s[i] != '\0')
	{
		if (i == 0 && (s[i] >= 'a' && s[i] <= 'z'))
		{
			s[i] = s[i] - 32;
		}

		for (j = 0; sep[j] != '\0'; j++)
		{
			if (s[i] == sep[j] && (s[i + 1] >= 'a' && s[i + 1] <= 'z'))
			{
				s[i + 1] = s[i + 1] - 32;
			}
		}
		i++;
	}
	return (s);
}
