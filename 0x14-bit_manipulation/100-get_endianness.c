/**
 * get_endianness - checks the endianness of the system
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	short int j = 1;
	char *charc = (char *) &j;

	return ((int) charc[0]);
}
