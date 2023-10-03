#include <stdlib.h>
#include "main.h"

/**
 * *str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: pointer to contents of s2, and null terminated
 */
char *str_concat(char *s1, char *s2)
{
	int len1, len2, i, j, k;
	len1 = 0;
	len2 = 0;
	i = 0;
	j = 0;
	k = 0;
	char *ch;

	while(s1[len1])
		len1++;

	while(s2[len2])
		len2++;

	ch = malloc((len1 + len2 + 1) * sizeof(char));

	if (ch == NULL)
		return (NULL); 

	for (i; i < len1; i++)
		{
			ch[i] = s1[i];
		}
	for (j = len1 + 1; j < len1 + len2; j++)
		{
			ch[j] = s2[k];
			k++;
		}

	return (ch);
}
