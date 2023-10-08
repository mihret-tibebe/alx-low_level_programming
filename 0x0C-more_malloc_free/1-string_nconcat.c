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
		s1 = "";

	while (s1[len] != 0)
		len++;

	return (len);
}
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ch;
	unsigned int len1, len2, len;

	len1 = word_count(s1);
	len2 = word_count(s2);

	if (n >= len2)
		len = len2;
	len = n;

	ch = (char *) malloc(sizeof(char) * ( len1 + len + 1 ));
	if (ch == NULL)
		return (NULL);

	for ()

	return (ch);
}
