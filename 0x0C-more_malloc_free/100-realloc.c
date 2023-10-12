#include <stdlib.h>
#include "main.h"

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to previously allocated memory
 * @old_size: size of the old allocation in bytes
 * @new_size: size of the new allocation in bytes
 *
 * Return: pointer to the newly allocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *mem;
	char *ch;
	char *c;
	unsigned int i = 0;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		mem = malloc(new_size);
		if (!mem)
			return (NULL);
		ch = (char *)mem;
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size > old_size && ptr != NULL)
	{
		c = (char *)ptr;
		mem = malloc(new_size);
		if (!mem)
			return (NULL);
		ch = (char *)mem;
		while (i < old_size)
		{
			ch[i] = c[i];
			i++;
		}
		free(ptr);
	}

	return (mem);
}
