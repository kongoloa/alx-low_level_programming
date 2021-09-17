#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds numbers
 * @argc: number of arguments passed to the function
 * @argv: argument vector of pointers to strings
 *
 * Return: 0 if no errors, else 1
 */

int main(int argc, char *argv[])
{
int total, i;
char *p;
int num;

total = 0;
if (argc > 1)
{
for (i = 1; argv[i]; i++)
{
num = strtol(argv[i], &p, 10);
if (!*p)
total += num;
else
{
printf("Error\n");
return (1);
}
}
}
printf("%d\n", total);
return (0);
}
