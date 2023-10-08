#include <stdlib.h>
#include "main.h"

/**
 * calc_min - calculates minimum of two sizes
 * @o: old size
 * @n: new size
 *Return: minimun value
*/
unsigned int calc_min(unsigned int o, unsigned int n)
{
	if (o < n)
		return (o);
	return (n);
}
 
/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr:  pointer to previously allocated memory
 * @old_size: old size of ptr
 * @new_size: new size of ptr
 * 
 * Return: new reallocated memory
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *mem;
	char *ch;
	char *c;
	unsigned int size, i = 0;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		mem = malloc(new_size);
		if (!mem)
		return (NULL);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	mem = malloc(new_size);
	if (!mem)
		return (NULL);

	ch = (char *) mem;
	c = (char *) ptr;

	size = calc_min(old_size, new_size);

	while (i < size)
	{
		ch[i] = c[i];
		i++;
	}
	ch[size] = '\0';
	free(ptr);

	return (mem);
}
