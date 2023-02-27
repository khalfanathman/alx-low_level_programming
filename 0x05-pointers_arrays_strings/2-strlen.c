/**
 * _strlen - returns the length of a string
 * @s: pointer variable that is used to  check the length
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int i, count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != '\n')
		{
			count++;
		}
	}
	return (count);
}
