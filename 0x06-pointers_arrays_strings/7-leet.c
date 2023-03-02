/**
 * leet - Encodes a string into 1337 (leet) speak
 * @str: The string to be encoded
 *
 * Return: A pointer to the encoded string
 */
char *leet(char *str)
{
	char leetMap[5][3] = {{'a', 'A', '4'}, {'e', 'E', '3'},
		{'o', 'O', '0'}, {'t', 'T', '7'}, {'l', 'L', '1'}};
	int i, j, k;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			for (k = 0; k < 2; k++)
			{
				if (str[i] == leetMap[j][k])
				{
					str[i] = leetMap[j][2];
				}
			}
		}
	}
	return (str);
}

