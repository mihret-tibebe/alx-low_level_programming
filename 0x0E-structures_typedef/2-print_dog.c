#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: struct dog object
*/
void print_dog(struct dog *d)
{
	struct dog d1 = d;
	printf("Name: %s\n", d1->name);
	printf("Age: %d\n", d1->age);
	printf("Owner: %s\n", d1->owner);
}
