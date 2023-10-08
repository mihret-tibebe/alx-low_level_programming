#include <stdlib.h>
#include "main.h"

/**
 * word_count - counts number of characters in a word
 * @s1: string
 * Return: string length
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
/**
 * string_nconcat - concatenates two strings
 * @s1: string
 * @s2: string
 * Return: a pointer that point to a newly allocated 
 * space in memory, which contains s1, followed by the 
 * first n bytes of s2, and null terminated
 */
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

	for (i = 0; i <= len1; i++)
	{
		ch[i] = s1[i];
	}


	for (j = 0; i <= (len1 + len); j++)
	{
		ch[i] = s2[j];
		i++;
	}
	ch[len1 + len] = '\0';

	return (ch);
}
