#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to the concatenated string, NULL if memory allocation fails
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, k, l = 0, length1 = 0, length2 = 0, newlen = 0;
	char *strncat;

	/* If either s1 or s2 is NULL, set it to empty string */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* Find length of s1 and s2 */
	for (i = 0; s1[i] != '\0'; i++)
		length1++;
	for (j = 0; s2[j] != '\0'; j++)
		length2++;

	/* Calculate length of the concatenated string */
	newlen = length1 + length2;

	strncat = malloc(newlen * sizeof(char) + 1); /* +1 for null terminator */

	if (strncat == NULL)
		return (NULL);

	for (k = 0; k < newlen; k++)
	{
		if (k >= length1)
		{
			strncat[k] = s2[l];
			l++;
		}
		else
		{
			strncat[k] = s1[k];
		}
	}

	strncat[newlen] = '\0';

	return (strncat);
}

