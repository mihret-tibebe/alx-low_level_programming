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
	char *ch;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(size * nmemb);
	if (mem == NULL)
	{
		free(arr);
		return (NULL);
	}

	ch = (char *) mem;
	while (i < (size * nmemb))
	{
		ch[i] = '\0';
		i++;
	}

	return (mem);
}
