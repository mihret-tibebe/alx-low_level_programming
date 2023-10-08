#include <stdlib.h>
#include "main.h"

/**
 * abs - calculates the absolute value of passed integer
 * @a: the integer whose absolute value will be calculated
 * Return: if a < 0, the negation of a i.e. -1 * a
 *		   otherwise return a without modification
 */
int abs(int a)
{
	if (a < 0)
	{
		a *= -1;
		return (a);
	}
	return (a);
}

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

	len = abs(max) - abs(min);
	len = abs(len);

	if (min > max)
		return (NULL);

	arr = (int *) malloc(sizeof(int) * len + 1);

	if (!arr)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		arr[i] = min;
		min++;
	}

	return (arr);
}
