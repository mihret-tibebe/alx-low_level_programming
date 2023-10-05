#include <stdlib.h>
#include "main.h"

/**
 * wordCount - word counter
 * @s: string
 *
 * Return: number of words
 */
int wordCount(char *s)
{
	int flag = 0, c, w = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			w++;
		}
	}

	return (w);
}
/**
 * **strtow - splits a string into words
 * @str: string
 *
 * Return: pointer to an array of strings
 */
char **strtow(char *str)
{
	char **wList, *tmp;
	int i, k = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = wordCount(str);
	if (words == 0)
		return (NULL);

	wList = (char **) malloc(sizeof(char *) * (words + 1));
	if (wList == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				wList[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}

	wList[k] = NULL;

	return (wList);
}
