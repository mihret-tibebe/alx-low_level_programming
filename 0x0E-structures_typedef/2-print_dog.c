#include "stdio.h"
#include "dog.h"

/**
 * print_dog - prints the contents of type struct dog @d
 * @d: variable of type struct dog
 */
void print_dog(struct dog *d)
{
	if (d == 0)
		return;

	printf("Name: ");
	if (d->name == NULL)
		printf("(nil)\n");
	else
		printf("%s\n", d->name);

	printf("Age: ");
	if (d->age != 0)
		printf("%f\n", d->age);
	else
		printf("(nil)\n");

	printf("Owner: ");
	if (d->owner == NULL)
		printf("(nil)\n");
	else
		printf("%s\n", d->owner);
}
