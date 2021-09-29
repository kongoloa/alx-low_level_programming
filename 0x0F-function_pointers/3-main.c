#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_op_func - function pointer that selects the correct function to perform
 * @s: operator argument
 * Return: function pointer corresponding to operator given
 */
int main(int argc, char *argv[])
{
int a, b;
int (*o)(int, int);

if (argc != 4)
{
printf("Error\n");
exit(98);
}
if (argv[2][1] != '\0')
{
printf("Error\n");
exit(99);
}

o = get_op_func(argv[2]);
if (o == NULL)
{
printf("Error\n");
exit(99);
}

a = atoi(argv[1]);
b = atoi(argv[3]);

printf("%d\n", o(a, b));

return (0);
}
