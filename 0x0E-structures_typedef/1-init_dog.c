#include <stdio.h>
#include "dog.h"

/**
 * init_dog -  initialize a variable of type struct dog
 * @d: instanse of struct dog
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

	d* = d1;
}
