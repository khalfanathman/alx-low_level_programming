#include <string.h>
#include <math.h>
#include <stdio.h>

/**
 * binary_to_uint - converts a binary number to an unsigned integer
 * @b: pointer to a string of 0 and 1 chars
 * Return: the converted number, or 0 if b contains chars other than 0 and 1
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0;
	int i, length = strlen(b) - 1;


	for (i = length; i >= 0; i--)
	{

		if (b[i] == '1')
		{
			sum += 1 << (length - i);
		}

		else if (b[i] != '0')
		{
			return (0);
		}

	}

	return (sum);

}
