/**
 * _strlen - returns the length of a string
 * @s: pointer variable that is used to  check the length
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
	}
	return (count);
}
