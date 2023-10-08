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
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(size * nmemb);
	if (!mem)
		return (NULL);

	while (i < size * nmemb)
	{
		mem[i] = 0;
		i++;
	}
	return (mem);
}
