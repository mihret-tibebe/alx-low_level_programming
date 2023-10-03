#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size: pointer to the string
 * @c: char
 * Return: char
 */

char *create_array(unsigned int size, char c)
{
	char *ch;
	unsigned int i = 0;

	if (size == 0)
		return NULL;

	ch = (char*) malloc (size * sizeof (char));
	if (ch == NULL)
		return NULL;

	for (i = 0; i < size; i++) 
	{
		ch[i] = c;
	}

	return (ch);
}
