#include <stdio.h>

/**
 * main - main block
 * Return: ALways 0
 */
int main(void)
{
int x, y;
for (x = 48; x <= 56; x++)
{
for (y = 49; y <= 57; y++)
{
if (y > x)
{
putchar(x);
putchar(y);
if (x != 56 || y != 57)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
