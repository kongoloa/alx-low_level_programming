#include "main.h"

/**
 * chk_sqrt - checks for the square root of y
 * @x:guess at sqrt
 * @y: number to find sqrt of
 *
 * Return: -1 or sqrt of y
 */
int chk_sqrt(int x, int y)
{
if (x * x == y)
return (x);
if (x * x > y)
return (-1);
return (chk_sqrt(x + 1, y));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer to find sqrt of
 *
 * Return: natural square root or -1
 */
int _sqrt_recursion(int n)
{
if (n == 0)
return (0);
return (chk_sqrt(1, n));
}
