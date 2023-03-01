#include <string.h>

/**
 * _strncat - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string.
 * @n: The maximum number of characters to concatenate from src.
 *
 * Return: A pointer to the resulting string @dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	char *finally;
	char newsrc[n];
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		newsrc[i] = src[i];
	}
	newsrc[i] = '\0';
	finally = strcat(dest, newsrc);
	return (finally);
}

