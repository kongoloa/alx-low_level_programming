#include "main.h"

/**
 * set_bit - sets a bit at a given index to 1
 * @n: decimal number passed by pointer
 * @index: index position to change, starting from 0
 * Return: 1 if it worked, -1 if an error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int set;
if (index > (sizeof(unsigned long int) * 8 - 1))
return (-1);
set = 1 << index;
*n = *n | set;
return (1);
}
