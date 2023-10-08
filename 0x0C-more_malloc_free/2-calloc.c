#include <stdlib.h>
#include "main.h"

/**
 * _calloc -  allocates memory for an array
 * @nmemb:  array of elements
 * @size: size of nmemb elements
 * Return: void
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	/*char *ch;*/
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(size * nmemb);
	if (mem == NULL)
	{
		return (NULL);
	}

	/*ch = (char *) mem;*/
	while (i < nmemb)
	{
		mem[i] = 0;
		i++;
	}

	return (mem);
}
