#include <ctype.h>

/**
 * cap_string - Capitalizes all words of a string
 * @str: The string to be capitalized
 *
 * Return: A pointer to the capitalized string
 */
char *cap_string(char *str)
{
	int i;
	char *p = str;
	int capitalize_next = 1;

	while (*p != '\0')
	{
		if (isspace(*p) || ispunct(*p))
		{
			capitalize_next = 1;
		}
		else
		{
			if (capitalize_next)
			{
				*p = toupper(*p);
				capitalize_next = 0;
			}
		}
		p++;
	}
	return (str);
}
