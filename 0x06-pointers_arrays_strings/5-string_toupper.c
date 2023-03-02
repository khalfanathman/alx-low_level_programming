#include <string.h>

/**
 * string_toupper - Converts all lowercase characters of a string to uppercase.
 *
 * @str: The string to convert.
 *
 * Return: A pointer to the converted string.
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; i <= strlen(str); i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
		else
		{
			continue;
		}
	}
	return (str);
}

