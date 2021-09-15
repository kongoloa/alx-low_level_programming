#include "main.h"

/**
 * chk_prime - checks to see if number is prime
 * @f: factor check
 * @p: possible prime number
 *
 * Return: 1 if prime, 0 if not
 */
int chk_prime(int f, int p)
{
if (p < 2 || p % f == 0)
return (0);
else if (f > p / 2)
return (1);
else
return (chk_prime(f + 1, p));
}

/**
 * is_prime_number - states if number is prime
 * @n: number to check
 *
 * Return: 1 if prime, 0 if not
 */
int is_prime_number(int n)
{
if (n == 2)
return (1);
return (chk_prime(2, n));
}
