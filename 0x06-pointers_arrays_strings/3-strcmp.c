#include <string.h>
/**
 * _strcmp - ccompares two strings.
 * @s1: string 1
 * @s2: string 2
 * Return:  0 when equal, -15 when s1 < s2 15 othwerwise.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	if (s1[i] == s2[i])
	{
		return (0);
	}
	else if (s1[i] < s2[i])
	{
		return (-15);
	}
	else
	{
		return (15);
	}
}
