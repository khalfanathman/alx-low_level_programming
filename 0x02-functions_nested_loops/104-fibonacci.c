#include <stdio.h>
/**
 * main - main function
 *
 * Return: nothing
 */
int main(void)
{
	int a = 1;
	int b = 2;
	int count = 2;

	printf("%d, %d, ", a, b);
	while (count < 98)
	{
		int c = a + b;

		a = b;
		b = c;
		printf("%d, ", b);
		count += 1;
	}
	printf("%d\n", b);
	return (0);
}
