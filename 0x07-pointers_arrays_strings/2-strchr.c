#include <stddef.h>
#include "main.h"

/**
 * _strchr - locates the first occurrence of character c in the string s
 * @s: pointer to the string to search in
 * @c: character to search for
 *
 * Return: pointer to the first occurrence of the character c in the string s,
 *         or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}

		i++;
	}
	if (s[i] == c)
		return (&s[i]);

	return (0);
}

