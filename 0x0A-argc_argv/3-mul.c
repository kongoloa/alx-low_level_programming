#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: number of arguments passed to function
 * @argv: array of pointers to argument strings
 * Return: 0 if no errors, else 1
 */

int main(int argc, char *argv[])
{
(void) argc;

if (argv[1] && argv[2])
{
printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
return (0);
}
else
printf("Error\n");

return (1);
}
