#include "main.h"
#include <stdlib.h>

/**
 * array_range - create an array of integers inclusive of min and max
 * @min: first integer number
 * @max: last integer number
 * Return: pointer to newly created array
 */
int *array_range(int min, int max)
{
int i, l;
int *a;
if (min > max)
return (NULL);
l = max - min + 1;
a = malloc(sizeof(int) * l);
if (a == NULL)
return (NULL);
for (i = 0; i < l; i++, min++)
{
a[i] = min;
}
return (a);
}
