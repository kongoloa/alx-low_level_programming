#include "main.h"
/**
 * print_line - Write a function that draws a straight line in the terminal.
 * @n: the number of times char '_' should be printed
 */
void print_line(int n)
{
char c;
for (c = 0; c < n; c++)
_putchar('_');
_putchar('\n');
}
