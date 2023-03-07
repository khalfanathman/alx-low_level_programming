#include <stdio.h>
#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to the string to search in
 * @accept: pointer to the string containing the characters to search for
 *
 * Return: the number of bytes in the initial segment of s consisting only
 *         of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int count = 0, i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (_strchr(accept, s[i]) == NULL)
		{
			return (count);
		}

		count++;
	}

	return (count);
}

