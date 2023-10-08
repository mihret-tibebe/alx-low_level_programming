#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return:  the pointer to the newly created array
*/
int *array_range(int min, int max)
{
	int len, i;
	int *arr;

	len = max - min;

	if (min > max)
		return (NULL);

	arr = (int *) malloc(sizeof(int) * (len + 1));

	if (!arr)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		arr[i] = min;
		min++;
	}

	return (arr);
}
