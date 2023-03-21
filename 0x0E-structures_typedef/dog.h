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
 * init_dog - initializes a dog structure
 * @d: pointer to dog structure
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Description: initializes a dog structure with name, age and owner info
 */
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif /**_DOG_H*/
