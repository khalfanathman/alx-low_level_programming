#include <stddef.h>
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: the string to search through
 * @accept: the set of bytes to search for
 *
 * Return: a pointer to the byte in `s` that matches one of the bytes in `accept`
 *         or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
  int len = 0, length = 0, i, j, k, l;

  for (j = 0; s[j] != '\0'; j++)
    len++;

  for (l = 0; accept[l] != '\0'; l++)
    length++;

  for (i = 0; i <= len; i++)
  {
    for (k = 0; k <= length; k++)
    {
      if (s[i] == accept[k])
        return &s[i];
    }
  }

  return NULL;
}

