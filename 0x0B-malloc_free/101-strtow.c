#include <stdlib.h>
#include "main.h"

/**
 * wordCount - helper function to count the number of words in a string
 * @s: string to evaluate
 *
 * Return: number of words
 */
int wordCount(char *s)
{
	int count, i;

	count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[0] == ' ')
		continue;
		if (s[i] == ' ')
		count++;
	}

	/*if (s[0] == ' ')*/
		/*count--;*/

	count++;

	return (count);
}
/**
 * strtow - function
 * @str: string
 *
 * Return: number of words
 */
char **strtow(char *str)
{
	char **wList;
	char *tmp;
	int words, len, i, start, end, l, j;

	words = 0;
	len = 0;
	start = 0;
	end = 0;
	l = 0;
	j = 0;

	while (str && str[len])
		len++;

	if (str == NULL || len == 0)
		return (NULL);
	words = wordCount(str);
	wList = (char **) malloc(sizeof(char *) * (words + 1));
	if (wList == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			end = i;
			l = end - start;
			tmp = (char *) malloc(sizeof(char) * (l + 1));
			if (tmp == NULL)
				return (NULL);
			while (start < end)
				*tmp++ = str[start++];
			*tmp = '\0';
			wList[j] = tmp - l;
			j++;
			start++;
		}
	}

	return (wList);
}
