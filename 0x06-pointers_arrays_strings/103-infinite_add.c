#include <stdio.h>

/**
 * infinite_add - Adds two numbers and stores the result in a buffer
 * @n1: The first number to add
 * @n2: The second number to add
 * @r: The buffer where the result will be stored
 * @size_r: The size of the buffer
 *
 * Return: A pointer to the result buffer if the addition was successful,
 *         or NULL if the result could not fit in the buffer.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = 0, len2 = 0, carry = 0, sum, m = 0, n;

	while (n1[len1] != '\0')
		len1++;
	while (n2[len2] != '\0')
		len2++;
	if (len1 + len2 >= size_r)
		return (NULL);
	int i = len1 - 1, j = len2 - 1, k = 0;

	while (i >= 0 || j >= 0 || carry > 0)
	{
		sum = carry;
		if (i >= 0)
			sum += n1[i] - '0';
		if (j >= 0)
			sum += n2[j] - '0';

		carry = sum >= 10;
		r[k++] = sum - (carry ? 10 : 0) + '0';
		i--, j--;
	}
	int m = 0, n = k - 1;

	while (m < n)
	{
		char tmp = r[m];

		r[m] = r[n];
		r[n] = tmp;
		m++;
		n--;
	}
	r[k] = '\0';
	return (r);
}
