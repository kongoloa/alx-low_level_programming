#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenate 2 strings, only n bytes of s2
 * @s1: first string to copy
 * @s2: second string to copy
 * @n: bytes to include of s2
 * Return: pointer to new space in memory or null
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *strDup;
int i;
unsigned int j;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
i = 0;
while (s1[i] != '\0')
i++;
strDup = malloc(sizeof(char) * (i + n + 1));
if (strDup == NULL)
return (NULL);
i = j = 0;
while (s1[i] != '\0')
{
strDup[i] = s1[i];
i++;
}
while (j < n && s2[j] != '\0')
{
strDup[i] = s2[j];
i++, j++;
}
strDup[i] = '\0';
return (strDup);
}
