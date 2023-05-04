/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: The number to retrieve the bit from.
 * @index: The index of the bit to retrieve.
 *
 * Return: The value of the bit at the specified index, or -1 if an error occurs.
 */
int get_bit(unsigned long int n, unsigned int index)
{
    if (index >= sizeof(unsigned long int) * 32)
	{
		return (-1);
	}
    if ((1 << index) & n)
    {
        return  (1);
    }else
    {
        return (0);
    }

}