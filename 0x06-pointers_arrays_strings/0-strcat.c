#include <string.h>
/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string.
 *
 * Return: A pointer to the resulting string @dest.
 */
char *_strcat(char *dest, char *src) 
{
	char *finally;
	
	finally = strcat(dest, src);
	return (finally);
}
