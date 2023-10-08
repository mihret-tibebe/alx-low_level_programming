#include "main.h"

/**
 * _calloc -  allocates memory for an array of nmemb elements
 * of size bytes each and returns a pointer to the allocated memory.
 * @nmemb:  array of elements
 * @size: size of nmemb elements
 * Return: void
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int mem, i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(size * nmemb);
	if (!mem)
		return (NULL);

	while (i < nmemb)
	{
		mem[i] = 0;
	}
}
