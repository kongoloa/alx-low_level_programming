#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - duplicate a string using malloc
 * @str: string to copy
 * Return: pointer to duplicated string or NULL if error
 */
char *_strdup(char *str)
{
unsigned int i, j;
char *s;
if (str == NULL)
return (NULL);
for (i = 0; str[i]; i++)
;
i++;
s = malloc(i * sizeof(char));
if (s == NULL)
{
return (NULL);
}
for (j = 0; j < i; j++)
{
s[j] = str[j];
}
return (s);
}
