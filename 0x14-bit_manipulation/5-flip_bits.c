/**
 * flip_bits - returns the number of bits you would need to flip to
 *             convert one number to another.
 * @n: unsigned long integer.
 * @m: unsigned long integer.
 *
 * Return: number of bits needed to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int fliped = 0, mask = 1, i;
	unsigned long int count = sizeof(unsigned long int) * 8;

	for (i = 0; i < count; i++)
	{
		if (((n >> i) & mask) != ((m >> i) & mask))
			fliped++;
	}

	return (fliped);
}
