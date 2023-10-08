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

	char *ch;
	int len1, len2, i, j, k;

	len1 = 0;
	len2 = 0;
	j = 0;
	k = 0;

	while (s1 && s1[len1])
		len1++;

	while (s2 && s2[len2])
		len2++;

	ch = malloc((len1 + len2 + 1) * sizeof(char));

	if (ch == NULL)
		return (NULL);

	if (s1)
	{
		for (i = 0; i < len1; i++)
		{
			ch[i] = s1[i];
		}
	}

	if (s2)
	{
		for (j = len1; j <= (len1 + len2); j++)
		{
			ch[j] = s2[k];
			k++;
		}
	}

	ch[len1 + len2 + 1] = '\0';

	return (ch);
}
