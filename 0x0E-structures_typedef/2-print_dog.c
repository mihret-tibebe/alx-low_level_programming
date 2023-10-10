#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: struct dog object
*/
void print_dog(struct dog *d)
{
	printf("Name: %s\n", d->name);
	printf("Age: %d\n", d->age);
	printf("Owner: %s\n", d->owner);
}
