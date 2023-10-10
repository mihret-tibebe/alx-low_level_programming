#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @d: the struct dog to be initialized
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog d1;

	d1.name = name;
	d1.age = age;
	d1.owner = owner;

	if (d == 0)
		return (0);

	*d = d1;
}
