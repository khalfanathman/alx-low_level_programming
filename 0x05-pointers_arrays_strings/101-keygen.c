#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 6

/**
 * main - Generates a random valid password for the program 101-crackme.
 *
 * Return: Always 0.
 */
int main(void)
{
	char password[PASSWORD_LENGTH + 1]; /* Buffer to hold the password */
	int i, random_number; /* Loop counter and random number */

	srand(time(NULL));
	/* seeed the random number generator with the current time */
	/* Generate each character of the password */
	for (i = 0; i < PASSWORD_LENGTH; i++)
	{
		random_number = rand() % 62; /* Generate a random number between 0 and 61 */
		/* Assign the corresponding character to the password buffer */
		if (random_number < 26)
			password[i] = 'A' + random_number; /* Uppercase letter */
		else if (random_number < 52)
			password[i] = 'a' + (random_number - 26); /* Lowercase letter */
		else
			password[i] = '0' + (random_number - 52); /* Digit */
	}
	password[PASSWORD_LENGTH] = '\0'; /* Null-terminate the password buffer */
	printf("Random password: %s\n", password);
	/* Print the generated password to the console */
return (0);
}

