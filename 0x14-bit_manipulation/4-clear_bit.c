int clear_bit(unsigned long int *n, unsigned int index)
{
    if (index >= sizeof(unsigned long int) * 32)
	{
		return (-1);
	}
    *n &= ~1 << index ;
    return (*n);
}