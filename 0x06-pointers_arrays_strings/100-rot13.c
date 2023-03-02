/**
 * rot13 - Applies the rot13 encryption algorithm to a string
 * @str: The string to be encrypted
 *
 * Return: The modified string
 */
char *rot13(char *str)
{
	char *p = str;
	int i;

	while (*p != '\0')
	{
		for (i = 0; i < 13; i++)
		{
			if ((*p >= 'a' && *p < 'n') || (*p >= 'A' && *p < 'N'))
			{
				*p += 13;
				break;
			}
			else if ((*p >= 'n' && *p <= 'z') || (*p >= 'N' && *p <= 'Z'))
			{
				*p -= 13;
				break;
			}
		}
		p++;
	}
	return (str);
}
