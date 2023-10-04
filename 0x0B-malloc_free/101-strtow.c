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
	i = 0;

	while (s[i] != '\0')
		{
			if (s[i] == ' ')
				count++;
		}
	return (count);
}
/**
 * strtow - helper function to count the number of words in a string
 * @s: string to evaluate
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


	if (str == NULL)
		return (NULL);

	while(str[len])
		len++;

	words = wordCount(str);

	wList = (char **) malloc(sizeof(char *) * (words + 1));

	for (i = 0; i <= len; i++)
		{
			if ((str[i] != ' ') == (str[i] != '\0'))
			{
				end = i;
				l = end - start;
				tmp = (char *) malloc(sizeof(char) * (l + 1));
				if (tmp == NULL)
					return (NULL);

				while(start < end)
					*tmp++ = str[start++];
				*tmp = '\0';

				wList[j] = tmp;
				j++;
				
			}
		}

	return (wList);
}
