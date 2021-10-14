#include "main.h"

/**
 * get_endianness - checks if a machine is little or big endian
 * Return: 0 if big, 1 if little endian
 */
int get_endianness(void)
{
int x;
char *y;
x = 1;
y = (char *)&x;
return (*y);
}
