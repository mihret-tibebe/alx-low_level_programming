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
	int i = 0;
	int len = 0;
	char *ch;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	ch = (char *) malloc( len + 1 * sizeof( char ));
	ch = str;

	if (ch == NULL)
		return (NULL);

	while ((ch[i] = str[i] != '\0'))
		i++;

	return (ch);
}
