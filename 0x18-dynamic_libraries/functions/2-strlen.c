#include "main.h"

/**
 * _strlen - counts the length of a string
 * @s: the string whose length is to be calculated
 *
 * Return: n, the length of the string
 */

int _strlen(char *s)
{
	int n = 0;

	while (s[n] != 0)
	{
		n++;
	}

	return (n++);
}
