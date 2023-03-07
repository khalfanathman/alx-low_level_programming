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
	int i, l, count = 0, length = 0, stalength = 0;
	char bool = 0;

	for (i = 0; needle[i] != '\0'; i++)
	{
		length++;
	}
	for (l = 0; haystack[l] != '\0'; l++)
	{
		stalength++;
	}
	count = length;
	for (i = 0; i <= stalength; i++)
	{
		if (haystack[i] == needle[0])
		{
			int j = i, k = 0;

			while (count > 0)
			{
				if (haystack[j] == needle[k])
				{
					bool = 1;
					count--;
					j++;
					k++;
				}
				else
				{
					bool = 1;
					break;
				}
			}
			if (bool && count == 0)
			{
				return (&haystack[i]);
			}
		}
	}
	return (NULL);
}
