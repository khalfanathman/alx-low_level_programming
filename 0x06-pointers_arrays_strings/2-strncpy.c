#include <string.h>

/**
 * _strncpy - copies n bytes from the source string to the destination string
 *
 * @dest: destination string to copy to
 * @src: source string to copy from
 * @n: number of bytes to be copied
 *
 * Return: pointer to the destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	/* check if n is greater than the length of src */
	if (n > strlen(src))
	{
		/* copy src to dest until the end of src */
		for (i = 0; i <= n; i++)
		{
			if (i <= strlen(src))
			{
				dest[i] = src[i];
			}
			else
			{
				/* pad dest with null bytes if necessary */
				dest[i] = '\0';
			}
		}
	}
	else
	{
		/* copy n bytes from src to dest */
		for (i = 0; i <= n; i++)
		{
			dest[i] = src[i];
		}
	}
	/* return a pointer to the destination string */
	return (dest);
}
