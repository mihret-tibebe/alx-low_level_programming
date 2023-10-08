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

	if (min > max)
		return (NULL);

	len = max - min;

	arr = (int *) malloc(sizeof(int) * len);

	if (!arr)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		arr[i] = min;
		min++;
	}

	return (arr);
}
