#include "main.h"

/**
 * _strlen - return the length of the string
 * @s: char type pointer
 * Return: length of string
 */
int _strlen(char *s)
{
int len = 0;
while (*s != '\0')
{
s++;
len++;
}
return (len);
}
