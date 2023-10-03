#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - copies the string given as parameter
 * @str: string to duplicate
 *
 * Return: pointer to the copied string (Success), NULL (Error)
 */
char *_strdup(char *str)
{
	char *ch;
	unsigned int i, len;

	i = 0;
	len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	ch = malloc(sizeof(char) * (len + 1));

	if (ch == NULL)
		return (NULL);

	while ((ch[i] = str[i]) != '\0')
		i++;

	return (ch);
}
