#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: struct dog object
*/
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	
	printf("Name: ");
	if (d->name == NULL)
		printf("(nil)");
	printf("%s\n", d->name);
	
	printf("Age: ");
	if (d->age == NULL)
		printf("(nil)");
	printf("%f\n", d->age);
	
	printf("Owner: ");
	if (d->owner == NULL)
		printf("(nil)");
	printf("%s\n", d->owner)
}
