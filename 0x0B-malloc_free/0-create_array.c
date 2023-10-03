#include "holberton.h"

/**
 * create_array - creates an array of chars, and initializes it with a specific char.
 * @size: pointer to the string
 * @c: char
 * Return: char
 */

char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return NULL;
	}
	else {
		char *ch = (char*) malloc (size * sizeof (char));
		int i;
		for (i = 0; i < size; i++) 
		{
			ch[i] = c;
		}
	}
	return ch;
}
