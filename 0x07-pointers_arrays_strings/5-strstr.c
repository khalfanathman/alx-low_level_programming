#include <stdio.h>
/**
 * _strstr - locates a substring.
 *
 * @haystack: string to search in.
 * @needle: substring to search for.
 *
 * Return: ptr to the strt of the lctd substr or NULL if othws.
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0, k = 0;

	while (haystack[i])
	{
		j = i, k = 0;

		while (needle[k] && haystack[j] == needle[k])
		{
			j++;
			k++;
		}

		if (!needle[k])
		{
			return (&haystack[i]);
		}

		i++;
	}

	return (NULL);
}
