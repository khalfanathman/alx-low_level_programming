#include "main.h"
#include <string.h>
/**
 * rev_string - reverse a string value
 *
 * @s: string to print
 */
void rev_string(char *s)
{
	int i;
	char t;

	for (i = 0; i < (int)(strlen(s) / 2); i++)
	{
		t = s[i];
		s[i] = s[strlen(s) - i - 1];
		s[strlen(s) - i - 1] = t;
	}
}
