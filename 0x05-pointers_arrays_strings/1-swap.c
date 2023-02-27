/**
 * swap_int - check the code
 * @a: variable to be swaped
 * @b: variable to be swapped with a
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
