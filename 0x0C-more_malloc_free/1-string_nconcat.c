#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings
 *
 * @s1: First string
 * @s2: Second string
 * @n: Maximum number of bytes from @s2 to concatenate
 *
 * Return: Pointer to concatenated string, or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k, len1 = 0, len2 = 0, totalen = 0, l = 0;
	char *ncocated;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		len1++;

	for (j = 0; s2[j] != '\0'; j++)
		len2++;

	if (n >= len2)
		n = len2;

	totalen = len1 + n;
	ncocated = malloc((totalen + 1) * sizeof(char));

	if (ncocated == NULL)
		return (NULL);

	for (k = 0; k < totalen; k++)
	{
		if (k < len1)
			ncocated[k] = s1[k];

		else
		{
			ncocated[k] = s2[l];
			l++;
		}
	}

	ncocated[totalen] = '\0';

	return (ncocated);
}

