#include <stdio.h>
#include "dog.h"
#include <math.h>

/**
 * print_dog - prints a dog structure
 * @d: pointer to dog structure
 *
 * Description: prints the name, age, and owner of a dog structure
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
		{
			d->name = "nil";
		}

		if (d->owner == NULL)
		{
			d->owner = "nil";
		}

		if (d->age != d->age)
		{
			printf("Name: %s\nAge: nil\nOwner: %s\n", d->name, d->owner);
		}

		else
		{
			printf("Name: %s\nAge: %.2f\nOwner: %s\n", d->name, d->age, d->owner);
		}
	}

	else
	{
		printf("%s", "");
	}
}
