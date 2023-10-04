#include "main.h"

 

/**

* strtow - splits a string into w

* @str: string to split

*

* Return: pointer to an array of strings

*/

char **strtow(char *str)

{

           int slen = 0, i, j = 0, k, w = 0, WordLen, start_index[1000], end_index[1000];

           char **NewStr;

 

           for (i = 0; str[i] != 0; i++)

                      slen++;

           for (i = 0; str[i] != 0; i++)

           {

                      if (str[i] != ' ')

                      {

                                 start_index[j] = i;

                                 while (str[i] != ' ' && str[i] != '\0')

                                            i++;

                                 end_index[j++] = i - 1;

                                 w++;

                      }

           }

           if (w == 0 || slen == 0 || str == NULL || *str == '\0')

                      return (NULL);

           NewStr = (char **) malloc(sizeof(char *) * (w + 1));

           if (NewStr == NULL)

                      return (NULL);

           for (i = 0; i < w; i++)

           {

                      WordLen = end_index[i] - start_index[i] + 2;/* to add a null char*/

                      NewStr[i] = (char *) malloc(sizeof(char) * WordLen);

                      if (NewStr[i] == NULL)

                      {

                                 for (i--; i >= 0; i--)

                                            free(NewStr[i]);

                                 free(NewStr);

                                 return (NULL);

                      }

                      k = start_index[i];

                      for (j = 0; j < WordLen - 1; j++)

                                 NewStr[i][j] = str[k++];

                      NewStr[i][j] = '\0';

           }

           NewStr[i] = NULL;

           return (NewStr);

}
