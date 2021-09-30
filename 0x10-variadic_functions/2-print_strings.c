#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - print a string followed by a newline
 * @separator: string to be printed between strings
 * @n: number of strings passed to function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list strings;
unsigned int i;
char *ptr;

va_start(strings, n);
for (i = 0; i < n; i++)
{
ptr = va_arg(strings, char *);
if (ptr == NULL)
printf("(nil)");
else
{
printf("%s", ptr);
if (i < n - 1 && separator != NULL)
printf("%s", separator);
}
}
va_end(strings);
printf("\n");
}
