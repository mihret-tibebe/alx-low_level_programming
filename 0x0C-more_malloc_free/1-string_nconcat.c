#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: string
 * @s2: string
 * Return: a pointer that point to a newly allocated 
 * space in memory, which contains s1, followed by the 
 * first n bytes of s2, and null terminated
 */
unsigned int word_count(char *s1)
{
	unsigned int len = 0;

	if (s1 == NULL)
		return (len);

	while (s1[len] != 0)
		len++;

	return (len);
}
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ch;
	unsigned int len1, len2, len = 0, i = 0, j = 0;

	len1 = word_count(s1);
	len2 = word_count(s2);

	if (n >= len2)
		len = len2;
	else
		len = n;

	ch = (char *) malloc(sizeof(char) * ( len1 + len + 1 ));
	if (ch == NULL)
		return (NULL);

	while (i <= len1)
	{
		ch[i] = s1[i];
		i++;
	}
	i += len1;

	while (i <= (len1 + len))
	{
		ch[i] = s2[j];
		i++;
		j++;
	}
	ch[len1 + len + 1] = '\0';

	return (ch);
}
