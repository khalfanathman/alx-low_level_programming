#include <stddef.h>
/**
 * strlen - calculate the length of a string
 * @s: pointer to the string to be measured
 *
 * Return: the length of the string
 */
size_t _strlen(const char *s)
{
    size_t len = 0;
    while (*s != '\0')
    {
        len++;
        s++;
    }
    return (len);
}
