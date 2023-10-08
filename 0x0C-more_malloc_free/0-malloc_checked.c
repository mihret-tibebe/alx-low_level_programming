#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: pointer to the string
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	int *i = malloc (sizeof * b);
	if (i == NULL)
		return (98);
}
