#ifndef _DOG_H
#define _DOG_H

/**
 * struct dog - structure defining a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Description: structure that defines a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;
/**
 * init_dog - initializes a dog structure
 * @d: pointer to dog structure
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Description: initializes a dog structure with name, age and owner info
 */
void init_dog(struct dog *d, char *name, float age, char *owner);
/**
 * print_dog - prints a dog structure
 * @d: pointer to dog structure
 *
 * Description: prints the name, age, and owner of a dog structure
 */
void print_dog(struct dog *d);
/**
 * new_dog - creates a new dog structure
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Description: creates a new dog structure and initializes its members
 * Return: pointer to the new dog structure
 */
dog_t *new_dog(char *name, float age, char *owner);

/**
 * free_dog - frees a dog structure
 * @d: pointer to dog structure
 *
 * Description: frees the memory allocated for a dog structure
 */
void free_dog(dog_t *d);
#endif /**_DOG_H*/
