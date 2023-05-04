/**
 * get_endianness - checks the endianness of the system
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	short int i = 1;
	char *byte = (char *) &i;

	return ((int) byte[0]);
}
