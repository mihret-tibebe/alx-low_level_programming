#include <stdlib.h>
#include "main.h"

/**
 * _strdup -  returns a pointer to a new string which
 * is a duplicate of the string str
 * @str: pointer to the string
 * Return: char
 */

char *_strdup(char *str)
{
	char *ch;

	if (str == NULL)
		return (NULL);

	ch = (char *) malloc(sizeof( str ));
	ch = str;

	if (ch == NULL)
		return (NULL);

	return (ch);
}
