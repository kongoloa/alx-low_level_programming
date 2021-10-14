#include "main.h"

/**
 * clear_bit - sets the value of a given bit to 0
 * @n: pointer to decimal number to change
 * @index: index position to change
 * Return: 1 if it worked, -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int set;
if (index > (sizeof(unsigned long int) * 8 - 1))
return (-1);
set = ~(1 << index);
*n = *n & set;
return (1);
}
